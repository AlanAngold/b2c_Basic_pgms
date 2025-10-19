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
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
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
    // 01000 PRINT TAB(31);"23 MATCHES"
    b2c_printf("23 matches\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    b2c_printf(" this is a game called '23 matches'.\n");
    // 01040 PRINT
    b2c_printf("");
    // 01050 PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    b2c_printf("When it is your turn, you may take one, two, or three\n");
    // 01060 PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    b2c_printf("Matches. The object of the game is not to have to take\n");
    // 01070 PRINT "THE LAST MATCH."
    b2c_printf("The last match.\n");
    // 01080 PRINT
    b2c_printf("");
    // 01090 PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    b2c_printf("Let's flip a coin to see who goes first.\n");
    // 01100 PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    b2c_printf("If it comes up heads, i will win the toss.\n");
    // 01110 PRINT
    b2c_printf("");
    // 01120 REM
    // 01130 N = 23
    N_int = 23;
    // 01140 Q = INT(2*RND(5))
    Q_int = INT(2*RND(5));
    // 01150 IF Q = 1 THEN 1190
    if(Q_int==1)goto Lbl_01190;
    // 01160 PRINT "TAILS! YOU GO FIRST. "
    b2c_printf("Tails! You go first. \n");
    // 01170 PRINT
    b2c_printf("");
    // 01180 GOTO 1270
    goto Lbl_01270;

  Lbl_01190:
    // 01190 PRINT "HEADS! I WIN! HA! HA!"
    b2c_printf("Heads! I win! Ha! Ha!\n");
    // 01200 PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    b2c_printf("Prepare to lose, meatball-nose!!\n");
    // 01210 PRINT
    b2c_printf("");
    // 01220 PRINT "I TAKE 2 MATCHES"
    b2c_printf("I take 2 matches\n");
    // 01230 N = N -2
    N_int = N_int-2;

  Lbl_01240:
    // 01240 PRINT "THE NUMBER OF MATCHES IS NOW" N
    b2c_printf("The number of matches is now %d \n",N_int);
    // 01250 PRINT
    b2c_printf("");
    // 01260 PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    b2c_printf("Your turn -- you may take 1, 2 or 3 matches.\n");

  Lbl_01270:
    // 01270 PRINT "HOW MANY DO YOU WISH TO REMOVE",
    b2c_printf("How many do you wish to remove");

  Lbl_01280:
    // 01280 INPUT K
    // Start of Basic INPUT statement 01280
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
    }; // End of Basic INPUT statement 01280
    // 01290 IF K > 3 THEN 1480
    if(K_int>3)goto Lbl_01480;
    // 01300 IF K <= 0 THEN 1480
    if(K_int<=0)goto Lbl_01480;
    // 01310 N = N - K
    N_int = N_int-K_int;
    // 01320 PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    b2c_printf("There are now %d There are nowMatches remaining.\n",N_int);
    // 01330 IF N = 4 THEN 1390
    if(N_int==4)goto Lbl_01390;
    // 01340 IF N = 3 THEN 1410
    if(N_int==3)goto Lbl_01410;
    // 01350 IF N = 2 THEN 1430
    if(N_int==2)goto Lbl_01430;
    // 01360 IF N <= 1 THEN  1580
    if(N_int<=1)goto Lbl_01580;
    // 01370 Z = 4 - K
    Z_int = 4-K_int;
    // 01380 GOTO 1440
    goto Lbl_01440;

  Lbl_01390:
    // 01390 Z = 3
    Z_int = 3;
    // 01400 GOTO 1440
    goto Lbl_01440;

  Lbl_01410:
    // 01410 Z = 2
    Z_int = 2;
    // 01420 GOTO 1440
    goto Lbl_01440;

  Lbl_01430:
    // 01430 Z = 1
    Z_int = 1;

  Lbl_01440:
    // 01440 PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    b2c_printf("My turn ! I remove %d My turn ! I removeMatches\n",Z_int);
    // 01450 N = N - Z
    N_int = N_int-Z_int;
    // 01460 IF N < = 1 THEN 1520
    if(N_int<=1)goto Lbl_01520;
    // 01470 GOTO 1240
    goto Lbl_01240;

  Lbl_01480:
    // 01480 PRINT "VERY FUNNY! DUMMY!"
    b2c_printf("Very funny! Dummy!\n");
    // 01490 PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    b2c_printf("Do you want to play or goof around?\n");
    // 01500 PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    b2c_printf("Now, how many matches do you want");
    // 01510 GOTO 1280
    goto Lbl_01280;

  Lbl_01520:
    // 01520 PRINT
    b2c_printf("");
    // 01530 PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    b2c_printf("You poor boob! You took the last match! I gotcha!!\n");
    // 01540 PRINT "HA ! HA ! I BEAT YOU !!!"
    b2c_printf("Ha ! Ha ! I beat you !!!\n");
    // 01550 PRINT
    b2c_printf("");
    // 01560 PRINT "GOOD BYE LOSER!"
    b2c_printf("Good bye loser!\n");
    // 01570 GOTO 1610
    goto Lbl_01610;

  Lbl_01580:
    // 01580 PRINT "YOU WON, FLOPPY EARS !"
    b2c_printf("You won, floppy ears !\n");
    // 01590 PRINT "THINK YOU'RE PRETTY SMART !"
    b2c_printf("Think you're pretty smart !\n");
    // 01600 PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    b2c_printf("Lets play again and i'll blow your shoes off !!\n");

  Lbl_01610:
    // 01610 STOP
    exit(1);
    // 01620 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
