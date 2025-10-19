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
int    B_int;                                     // Basic: B 
int    C_int;                                     // Basic: C 
int    I_int;                                     // Basic: I 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    W_int;                                     // Basic: W 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01420();
void Routine_01640();

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

void Routine_01420(){
    // 01420 Q=N
    Q_int = N_int;
    // 01430 IF M=1 THEN 1450
    if(M_int==1)goto Lbl_01450;
    // 01440 Q=Q-1
    Q_int = Q_int-1;

  Lbl_01450:
    // 01450 IF M=1 THEN 1500
    if(M_int==1)goto Lbl_01500;
    // 01460 IF N>A THEN 1540
    if(N_int>A_int)goto Lbl_01540;
    // 01470 W=1
    W_int = 1;
    // 01480 PRINT:PRINT "COMPUTER TAKES";N;"AND LOSES."
    b2c_printf("Computer takes %d Computer takesAnd loses.\n",N_int);
    // 01490 GOTO 01630
    goto Lbl_01630;

  Lbl_01500:
    // 01500 IF N>B THEN 1540
    if(N_int>B_int)goto Lbl_01540;
    // 01510 W=1
    W_int = 1;
    // 01520 PRINT:PRINT "COMPUTER TAKES";N;"AND WINS."
    b2c_printf("Computer takes %d Computer takesAnd wins.\n",N_int);
    // 01530 GOTO 01630
    goto Lbl_01630;

  Lbl_01540:
    // 01540 P=Q-C*INT(Q/C)
    P_int = Q_int-C_int*INT(Q_int/C_int);
    // 01550 IF P>=A THEN 1570
    if(P_int>=A_int)goto Lbl_01570;
    // 01560 P=A
    P_int = A_int;

  Lbl_01570:
    // 01570 IF P<=B THEN 1590
    if(P_int<=B_int)goto Lbl_01590;
    // 01580 P=B
    P_int = B_int;

  Lbl_01590:
    // 01590 N=N-P
    N_int = N_int-P_int;
    // 01600 PRINT:PRINT "COMPUTER TAKES";P;"AND LEAVES";N
    b2c_printf("Computer takes %d Computer takesAnd leavesAnd leaves %d \n",P_int,N_int);
    // 01610 W=0
    W_int = 0;
    // 01620 GOTO 01630
    goto Lbl_01630;

  Lbl_01630:
    // 01630 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------

void Routine_01640(){
    // 01640 PRINT:PRINT "YOUR MOVE ";
    b2c_printf("Your move ");

  Lbl_01650:
    // 01650 INPUT P
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
                (err += b2c_strtoi(&P_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01650
    // 01660 IF P<>0 THEN 1700
    if(P_int!=0)goto Lbl_01700;
    // 01670 PRINT:PRINT:PRINT "I TOLD YOU NOT TO USE ZERO! COMPUTER WINS BY FORFEIT."
    b2c_printf("I told you not to use zero! Computer wins by forfeit.\n");
    // 01680 W=1
    W_int = 1;
    // 01690 GOTO 01910
    goto Lbl_01910;

  Lbl_01700:
    // 01700 IF P<>INT(P) THEN 1750
    if(P_int!=INT(P_int))goto Lbl_01750;
    // 01710 IF P>=A THEN 1740
    if(P_int>=A_int)goto Lbl_01740;
    // 01720 IF P=N THEN 1790
    if(P_int==N_int)goto Lbl_01790;
    // 01730 GOTO 1750
    goto Lbl_01750;

  Lbl_01740:
    // 01740 IF P<=B THEN 1770
    if(P_int<=B_int)goto Lbl_01770;

  Lbl_01750:
    // 01750 PRINT "ILLEGAL MOVE, REENTER IT ";
    b2c_printf("Illegal move, reenter it ");
    // 01760 GOTO 1650
    goto Lbl_01650;

  Lbl_01770:
    // 01770 N=N-P
    N_int = N_int-P_int;
    // 01780 IF N<>0 THEN 1860
    if(N_int!=0)goto Lbl_01860;

  Lbl_01790:
    // 01790 IF M=1 THEN 1830
    if(M_int==1)goto Lbl_01830;
    // 01800 PRINT:PRINT "TOUGH LUCK, YOU LOSE."
    b2c_printf("Tough luck, you lose.\n");
    // 01810 W=1
    W_int = 1;
    // 01820 GOTO 018202
    goto Lbl_01910;

  Lbl_01830:
    // 01830 PRINT:PRINT:PRINT "CONGRATULATIONS, YOU WIN."
    b2c_printf("Congratulations, you win.\n");
    // 01840 W=1
    W_int = 1;
    // 01850 GOTO 01910
    goto Lbl_01910;

  Lbl_01860:
    // 01860 IF N>=0 THEN 1890
    if(N_int>=0)goto Lbl_01890;
    // 01870 N=N+P
    N_int = N_int+P_int;
    // 01880 GOTO 1750
    goto Lbl_01750;

  Lbl_01890:
    // 01890 W=0
    W_int = 0;
    // 01900 GOTO 01910
    goto Lbl_01910;

  Lbl_01910:
    // 01910 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT CHR$(26)
    b2c_printf("");
    // 01010 PRINT TAB(33);"BATNUM":PRINT
    b2c_printf("");
    // 01020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01030 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01040 PRINT "   This program is a 'Battle of Numbers' game, where the"
    b2c_printf("   this program is a 'battle of numbers' game, where the\n");
    // 01050 PRINT "computer is your opponent."
    b2c_printf("Computer is your opponent.\n");
    // 01060 PRINT 
    b2c_printf("");
    // 01070 PRINT "   The game starts with an assumed pile of objects. You"
    b2c_printf("   the game starts with an assumed pile of objects. You\n");
    // 01080 PRINT "and your opponent alternately remove objects from the pile."
    b2c_printf("And your opponent alternately remove objects from the pile.\n");
    // 01090 PRINT "Winning is defined in advance as taking the last object or"
    b2c_printf("Winning is defined in advance as taking the last object or\n");
    // 01100 PRINT "not. You can also specify some other beginning conditions."
    b2c_printf("Not. You can also specify some other beginning conditions.\n");
    // 01110 PRINT "Don't use zero, however, in playing the game.":PRINT
    b2c_printf("");
    // 01120 PRINT "Enter a negative number for new pile size to stop playing."
    b2c_printf("Enter a negative number for new pile size to stop playing.\n");
    // 01130 PRINT:PRINT
    b2c_printf("");
    // 01140 GOTO 1180
    goto Lbl_01180;

  Lbl_01150:
    // 01150 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01160 PRINT
        b2c_printf("");
        // 01170 NEXT I
        int dummy_1170=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_01180:
    // 01180 INPUT "ENTER PILE SIZE";N
    // Start of Basic INPUT statement 01180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ENTER PILE SIZE"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180
    // 01190 IF N>=1 THEN 1210
    if(N_int>=1)goto Lbl_01210;
    // 01200 PRINT:PRINT:PRINT:RUN "MENU"
    system(""MENU"");

  Lbl_01210:
    // 01210 IF N<>INT(N) THEN 1150
    if(N_int!=INT(N_int))goto Lbl_01150;
    // 01220 IF N<1 THEN 1150
    if(N_int<1)goto Lbl_01150;

  Lbl_01230:
    // 01230 INPUT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: ";M
    // Start of Basic INPUT statement 01230
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST: "");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01230
    // 01240 IF M=1 THEN 1260
    if(M_int==1)goto Lbl_01260;
    // 01250 IF M<>2 THEN 1230
    if(M_int!=2)goto Lbl_01230;

  Lbl_01260:
    // 01260 INPUT "ENTER MIN AND MAX ";A,B
    // Start of Basic INPUT statement 01260
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ENTER MIN AND MAX "");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&A_int,args,0)) ||
                (err += b2c_strtoi(&B_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01260
    // 01270 IF A>B THEN 1260
    if(A_int>B_int)goto Lbl_01260;
    // 01280 IF A<1 THEN 1260
    if(A_int<1)goto Lbl_01260;
    // 01290 IF A<>INT(A) THEN 1260
    if(A_int!=INT(A_int))goto Lbl_01260;
    // 01300 IF B<>INT(B) THEN 1260
    if(B_int!=INT(B_int))goto Lbl_01260;

  Lbl_01310:
    // 01310 INPUT "ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST ";S
    // Start of Basic INPUT statement 01310
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""ENTER START OPTION - 1 COMPUTER FIRST, 2 YOU FIRST "");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&S_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01310
    // 01320 PRINT:PRINT
    b2c_printf("");
    // 01330 IF S=1 THEN 1350
    if(S_int==1)goto Lbl_01350;
    // 01340 IF S<>2 THEN 1310
    if(S_int!=2)goto Lbl_01310;

  Lbl_01350:
    // 01350 C=A+B
    C_int = A_int+B_int;
    // 01360 IF S=2 THEN 1390
    if(S_int==2)goto Lbl_01390;

  Lbl_01370:
    // 01370 GOSUB 1420
    Routine_01420();
    // 01380 IF W=1 THEN 1150
    if(W_int==1)goto Lbl_01150;

  Lbl_01390:
    // 01390 GOSUB 1640
    Routine_01640();
    // 01400 IF W=1 THEN 1150
    if(W_int==1)goto Lbl_01150;
    // 01410 GOTO 1370
    goto Lbl_01370;
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
