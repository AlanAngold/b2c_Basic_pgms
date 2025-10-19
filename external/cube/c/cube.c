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
int    A1_int;                                    // Basic: A1 
int    B_int;                                     // Basic: B 
int    B7_int;                                    // Basic: B7 
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    O_int;                                     // Basic: O 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
int    Z1_int;                                    // Basic: Z1 
int    Z2_int;                                    // Basic: Z2 
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
    // 01000 PRINT TAB(34);"CUBE"
    b2c_printf("Cube\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT : PRINT : PRINT
    b2c_printf("");
    // 01030 PRINT "DO YOU WANT TO SEE THE INSTRUCTIONS? (YES--1,NO--0)"
    b2c_printf("Do you want to see the instructions? (Yes--1,no--0)\n");
    // 01040 INPUT B7
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
                (err += b2c_strtoi(&B7_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01040
    // 01050 IF B7=0 THEN 1300
    if(B7_int==0)goto Lbl_01300;
    // 01060 PRINT"THIS IS A GAME IN WHICH YOU WILL BE PLAYING AGAINST THE"
    b2c_printf("This is a game in which you will be playing against the\n");
    // 01070 PRINT"RANDOM DECISION OF THE COMPUTER. THE FIELD OF PLAY IS A"
    b2c_printf("Random decision of the computer. The field of play is a\n");
    // 01080 PRINT"CUBE OF SIDE 3. ANY OF THE 27 LOCATIONS CAN BE DESIGNATED"
    b2c_printf("Cube of side 3. Any of the 27 locations can be designated\n");
    // 01090 PRINT"BY INPUTING THREE NUMBERS SUCH AS 2,3,1. AT THE START,"
    b2c_printf("By inputing three numbers such as 2,3,1. At the start,\n");
    // 01100 PRINT"YOU ARE AUTOMATICALLY AT LOCATION 1,1,1. THE OBJECT OF"
    b2c_printf("You are automatically at location 1,1,1. The object of\n");
    // 01110 PRINT"THE GAME IS TO GET TO LOCATION 3,3,3. ONE MINOR DETAIL:"
    b2c_printf("The game is to get to location 3,3,3. One minor detail:\n");
    // 01120 PRINT"THE COMPUTER WILL PICK, AT RANDOM, 5 LOCATIONS AT WHICH"
    b2c_printf("The computer will pick, at random, 5 locations at which\n");
    // 01130 PRINT"IT WILL PLANT LAND MINES. IF YOU HIT ONE OF THESE LOCATIONS"
    b2c_printf("It will plant land mines. If you hit one of these locations\n");
    // 01140 PRINT"YOU LOSE. ONE OTHER DETAIL: YOU MAY MOVE ONLY ONE SPACE "
    b2c_printf("You lose. One other detail: you may move only one space \n");
    // 01150 PRINT"IN ONE DIRECTION EACH MOVE. FOR  EXAMPLE: FROM 1,1,2 YOU"
    b2c_printf("In one direction each move. For  example: from 1,1,2 you\n");
    // 01160 PRINT"MAY MOVE TO 2,1,2 OR 1,1,3. YOU MAY NOT CHANGE"
    b2c_printf("May move to 2,1,2 or 1,1,3. You may not change\n");
    // 01170 PRINT"TWO OF THE NUMBERS ON THE SAME MOVE. IF YOU MAKE AN ILLEGAL"
    b2c_printf("Two of the numbers on the same move. If you make an illegal\n");
    // 01180 PRINT"MOVE, YOU LOSE AND THE COMPUTER TAKES THE MONEY YOU MAY"
    b2c_printf("Move, you lose and the computer takes the money you may\n");
    // 01190 PRINT"HAVE BET ON THAT ROUND."
    b2c_printf("Have bet on that round.\n");
    // 01200 PRINT
    b2c_printf("");
    // 01210 PRINT
    b2c_printf("");
    // 01220 PRINT"ALL YES OR NO QUESTIONS WILL BE ANSWERED BY A 1 FOR YES"
    b2c_printf("All yes or no questions will be answered by a 1 for yes\n");
    // 01230 PRINT"OR A 0 (ZERO) FOR NO."
    b2c_printf("Or a 0 (zero) for no.\n");
    // 01240 PRINT
    b2c_printf("");
    // 01250 PRINT"WHEN STATING THE AMOUNT OF A WAGER, PRINT ONLY THE NUMBER"
    b2c_printf("When stating the amount of a wager, print only the number\n");
    // 01260 PRINT"OF DOLLARS (EXAMPLE: 250)  YOU ARE AUTOMATICALLY STARTED WITH"
    b2c_printf("Of dollars (example: 250)  you are automatically started with\n");
    // 01270 PRINT"500 DOLLARS IN YOUR ACCOUNT."
    b2c_printf("500 dollars in your account.\n");
    // 01280 PRINT
    b2c_printf("");
    // 01290 PRINT "GOOD LUCK!"
    b2c_printf("Good luck!\n");

  Lbl_01300:
    // 01300 LET A1=500
    A1_int = 500;

  Lbl_01310:
    // 01310 LET A=INT(3*(RND(X)))
    A_int = INT(3*(RND(X_int)));
    // 01320 IF A<>0 THEN 1340
    if(A_int!=0)goto Lbl_01340;
    // 01330 LET A=3
    A_int = 3;

  Lbl_01340:
    // 01340 LET B=INT(3*(RND(X)))
    B_int = INT(3*(RND(X_int)));
    // 01350 IF B<>0 THEN 1370
    if(B_int!=0)goto Lbl_01370;
    // 01360 LET B=2
    B_int = 2;

  Lbl_01370:
    // 01370 LET C=INT(3*(RND(X)))
    C_int = INT(3*(RND(X_int)));
    // 01380 IF C<>0 THEN 1400
    if(C_int!=0)goto Lbl_01400;
    // 01390 LET C=3
    C_int = 3;

  Lbl_01400:
    // 01400 LET D=INT(3*(RND(X)))
    D_int = INT(3*(RND(X_int)));
    // 01410 IF D<>0 THEN 1430
    if(D_int!=0)goto Lbl_01430;
    // 01420 LET D=1
    D_int = 1;

  Lbl_01430:
    // 01430 LET E=INT(3*(RND(X)))
    E_int = INT(3*(RND(X_int)));
    // 01440 IF E<>0 THEN 1460
    if(E_int!=0)goto Lbl_01460;
    // 01450 LET E=3
    E_int = 3;

  Lbl_01460:
    // 01460 LET F=INT(3*(RND(X)))
    F_int = INT(3*(RND(X_int)));
    // 01470 IF F<>0 THEN 1490
    if(F_int!=0)goto Lbl_01490;
    // 01480 LET F=3
    F_int = 3;

  Lbl_01490:
    // 01490 LET G=INT(3*(RND(X)))
    G_int = INT(3*(RND(X_int)));
    // 01500 IF G<>0 THEN 1520
    if(G_int!=0)goto Lbl_01520;
    // 01510 LET G=3
    G_int = 3;

  Lbl_01520:
    // 01520 LET H=INT(3*(RND(X)))
    H_int = INT(3*(RND(X_int)));
    // 01530 IF H<>0 THEN 1550
    if(H_int!=0)goto Lbl_01550;
    // 01540 LET H=3
    H_int = 3;

  Lbl_01550:
    // 01550 LET I=INT(3*(RND(X)))
    I_int = INT(3*(RND(X_int)));
    // 01560 IF I<>0 THEN 1580
    if(I_int!=0)goto Lbl_01580;
    // 01570 LET I=2
    I_int = 2;

  Lbl_01580:
    // 01580 LET J=INT(3*(RND(X)))
    J_int = INT(3*(RND(X_int)));
    // 01590 IF J<>0 THEN 1610
    if(J_int!=0)goto Lbl_01610;
    // 01600 LET J=3
    J_int = 3;

  Lbl_01610:
    // 01610 LET K=INT(3*(RND(X)))
    K_int = INT(3*(RND(X_int)));
    // 01620 IF K<>0 THEN 1640
    if(K_int!=0)goto Lbl_01640;
    // 01630 LET K=2
    K_int = 2;

  Lbl_01640:
    // 01640 LET L=INT(3*(RND(X)))
    L_int = INT(3*(RND(X_int)));
    // 01650 IF L<>0 THEN 1670
    if(L_int!=0)goto Lbl_01670;
    // 01660 LET L=3
    L_int = 3;

  Lbl_01670:
    // 01670 LET M=INT(3*(RND(X)))
    M_int = INT(3*(RND(X_int)));
    // 01680 IF M<>0 THEN 1700
    if(M_int!=0)goto Lbl_01700;
    // 01690 LET M=3
    M_int = 3;

  Lbl_01700:
    // 01700 LET N=INT(3*(RND(X)))
    N_int = INT(3*(RND(X_int)));
    // 01710 IF N<>0 THEN 1730
    if(N_int!=0)goto Lbl_01730;
    // 01720 LET N=1
    N_int = 1;

  Lbl_01730:
    // 01730 LET O=INT (3*(RND(X)))
    O_int = INT(3*(RND(X_int)));
    // 01740 IF O <>0 THEN 1760
    if(O_int!=0)goto Lbl_01760;
    // 01750 LET O=3
    O_int = 3;

  Lbl_01760:
    // 01760 PRINT "WANT TO MAKE A WAGER?"
    b2c_printf("Want to make a wager?\n");
    // 01770 INPUT Z
    // Start of Basic INPUT statement 01770
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
    }; // End of Basic INPUT statement 01770
    // 01780 IF Z=0 THEN 1860
    if(Z_int==0)goto Lbl_01860;
    // 01790 PRINT "HOW MUCH ";
    b2c_printf("How much ");

  Lbl_01800:
    // 01800 INPUT Z1
    // Start of Basic INPUT statement 01800
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&Z1_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01800
    // 01810 IF A1<Z1 THEN 2470
    if(A1_int<Z1_int)goto Lbl_02470;
    // 01820 LET W=1
    W_int = 1;
    // 01830 LET X=1
    X_int = 1;
    // 01840 LET Y=1
    Y_int = 1;
    // 01850 PRINT
    b2c_printf("");

  Lbl_01860:
    // 01860 PRINT "IT'S YOUR MOVE:  ";
    b2c_printf("It's your move:  ");

  Lbl_01870:
    // 01870 INPUT P,Q,R
    // Start of Basic INPUT statement 01870
    {
        int numargs=3;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&P_int,args,0)) ||
                (err += b2c_strtoi(&Q_int,args,1)) ||
                (err += b2c_strtoi(&R_int,args,2)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01870
    // 01880 IF P>W+1 THEN 1970
    if(P_int>W_int+1)goto Lbl_01970;
    // 01890 IF P=W+1 THEN 1940
    if(P_int==W_int+1)goto Lbl_01940;
    // 01900 IF Q>X+1 THEN 1970
    if(Q_int>X_int+1)goto Lbl_01970;
    // 01910 IF Q=(X+1) THEN 1950
    if(Q_int==(X_int+1))goto Lbl_01950;
    // 01920 IF R >(Y+1)  THEN 1970
    if(R_int>(Y_int+1))goto Lbl_01970;
    // 01930 GOTO 1990
    goto Lbl_01990;

  Lbl_01940:
    // 01940 IF Q>= X+1 THEN 1970
    if(Q_int>=X_int+1)goto Lbl_01970;

  Lbl_01950:
    // 01950 IF R>=Y+1 THEN 1970
    if(R_int>=Y_int+1)goto Lbl_01970;
    // 01960 GOTO 1990
    goto Lbl_01990;

  Lbl_01970:
    // 01970 PRINT:PRINT "ILLEGAL MOVE. YOU LOSE."
    b2c_printf("Illegal move. You lose.\n");
    // 01980 GOTO 2380
    goto Lbl_02380;

  Lbl_01990:
    // 01990 LET W=P
    W_int = P_int;
    // 02000 LET X=Q
    X_int = Q_int;
    // 02010 LET Y=R
    Y_int = R_int;
    // 02020 IF P=3 THEN 2040
    if(P_int==3)goto Lbl_02040;
    // 02030 GOTO 2070
    goto Lbl_02070;

  Lbl_02040:
    // 02040 IF  Q=3 THEN 2060
    if(Q_int==3)goto Lbl_02060;
    // 02050 GOTO 2070
    goto Lbl_02070;

  Lbl_02060:
    // 02060 IF R=3 THEN 2490
    if(R_int==3)goto Lbl_02490;

  Lbl_02070:
    // 02070 IF P=A THEN 2090
    if(P_int==A_int)goto Lbl_02090;
    // 02080 GOTO 2120
    goto Lbl_02120;

  Lbl_02090:
    // 02090 IF Q=B THEN 2110
    if(Q_int==B_int)goto Lbl_02110;
    // 02100 GOTO 2120
    goto Lbl_02120;

  Lbl_02110:
    // 02110 IF R=C THEN 2340
    if(R_int==C_int)goto Lbl_02340;

  Lbl_02120:
    // 02120 IF P=D THEN 2140
    if(P_int==D_int)goto Lbl_02140;
    // 02130 GOTO 2170
    goto Lbl_02170;

  Lbl_02140:
    // 02140 IF Q=E THEN 2160
    if(Q_int==E_int)goto Lbl_02160;
    // 02150 GOTO 2170
    goto Lbl_02170;

  Lbl_02160:
    // 02160 IF  R=F THEN 2340
    if(R_int==F_int)goto Lbl_02340;

  Lbl_02170:
    // 02170 IF P=G THEN 2190
    if(P_int==G_int)goto Lbl_02190;
    // 02180 GOTO 2220
    goto Lbl_02220;

  Lbl_02190:
    // 02190 IF Q=H THEN 2210
    if(Q_int==H_int)goto Lbl_02210;
    // 02200 GOTO 2220
    goto Lbl_02220;

  Lbl_02210:
    // 02210 IF R=I THEN 2340
    if(R_int==I_int)goto Lbl_02340;

  Lbl_02220:
    // 02220 IF P=J THEN 2240
    if(P_int==J_int)goto Lbl_02240;
    // 02230 GOTO 2270
    goto Lbl_02270;

  Lbl_02240:
    // 02240 IF Q=K THEN 2260
    if(Q_int==K_int)goto Lbl_02260;
    // 02250 GOTO 2270
    goto Lbl_02270;

  Lbl_02260:
    // 02260 IF R=L THEN 2380
    if(R_int==L_int)goto Lbl_02380;

  Lbl_02270:
    // 02270 IF P=M THEN 2290
    if(P_int==M_int)goto Lbl_02290;
    // 02280 GOTO 2320
    goto Lbl_02320;

  Lbl_02290:
    // 02290 IF Q=N THEN 2310
    if(Q_int==N_int)goto Lbl_02310;
    // 02300 GOTO 2320
    goto Lbl_02320;

  Lbl_02310:
    // 02310 IF R=O THEN 2340
    if(R_int==O_int)goto Lbl_02340;

  Lbl_02320:
    // 02320 PRINT "NEXT MOVE: ";
    b2c_printf("Next move: ");
    // 02330 GOTO 1870 
    goto Lbl_01870;

  Lbl_02340:
    // 02340 PRINT"******BANG******"
    b2c_printf("******bang******\n");
    // 02350 PRINT "YOU LOSE!"
    b2c_printf("You lose!\n");
    // 02360 PRINT
    b2c_printf("");
    // 02370 PRINT
    b2c_printf("");

  Lbl_02380:
    // 02380 IF   Z=0 THEN 2540
    if(Z_int==0)goto Lbl_02540;
    // 02390 PRINT 
    b2c_printf("");
    // 02400 LET Z2=A1-Z1
    Z2_int = A1_int-Z1_int;
    // 02410 IF Z2>0 THEN 2440
    if(Z2_int>0)goto Lbl_02440;
    // 02420 PRINT "YOU BUST."
    b2c_printf("You bust.\n");
    // 02430 GOTO 2570
    goto Lbl_02570;

  Lbl_02440:
    // 02440 PRINT " YOU NOW HAVE"; Z2; "DOLLARS."
    b2c_printf(" you now have %d  you now haveDollars.\n",Z2_int);
    // 02450 LET A1=Z2
    A1_int = Z2_int;
    // 02460 GOTO 2540
    goto Lbl_02540;

  Lbl_02470:
    // 02470 PRINT"TRIED TO FOOL ME; BET AGAIN";
    b2c_printf("Tried to fool me; bet again");
    // 02480 GOTO 1800
    goto Lbl_01800;

  Lbl_02490:
    // 02490 PRINT"CONGRATULATIONS!"
    b2c_printf("Congratulations!\n");
    // 02500 IF Z=0 THEN 2540
    if(Z_int==0)goto Lbl_02540;
    // 02510 LET Z2=A1+Z1
    Z2_int = A1_int+Z1_int;
    // 02520 PRINT "YOU NOW HAVE"; Z2;"DOLLARS."
    b2c_printf("You now have %d You now haveDollars.\n",Z2_int);
    // 02530 LET A1=Z2
    A1_int = Z2_int;

  Lbl_02540:
    // 02540 PRINT"DO YOU WANT TO TRY AGAIN ";
    b2c_printf("Do you want to try again ");
    // 02550 INPUT S
    // Start of Basic INPUT statement 02550
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02550
    // 02560 IF S=1 THEN 1310
    if(S_int==1)goto Lbl_01310;

  Lbl_02570:
    // 02570 PRINT "TOUGH LUCK!"
    b2c_printf("Tough luck!\n");
    // 02580 PRINT
    b2c_printf("");
    // 02590 PRINT "GOODBYE."
    b2c_printf("Goodbye.\n");
    // 02600 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
