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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    K_int;                                     // Basic: K 
int    L_int;                                     // Basic: L 
int    M_int_arr[100];                            // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int;                                     // Basic: P 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
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
    // 01000 PRINT TAB(33);"BOMBARDMENT"
    b2c_printf("Bombardment\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "YOU ARE ON A BATTLEFIELD WITH 4 PLATOONS AND YOU"
    b2c_printf("You are on a battlefield with 4 platoons and you\n");
    // 01040 PRINT "HAVE 25 OUTPOSTS AVAILABLE WHERE THEY MAY BE PLACED."
    b2c_printf("Have 25 outposts available where they may be placed.\n");
    // 01050 PRINT "YOU CAN ONLY PLACE ONE PLATOON AT ANY ONE OUTPOST."
    b2c_printf("You can only place one platoon at any one outpost.\n");
    // 01060 PRINT "THE COMPUTER DOES THE SAME WITH ITS FOUR PLATOONS."
    b2c_printf("The computer does the same with its four platoons.\n");
    // 01070 PRINT
    b2c_printf("");
    // 01080 PRINT "THE OBJECT OF THE GAME IS TO FIRE MISSLES AT THE"
    b2c_printf("The object of the game is to fire missles at the\n");
    // 01090 PRINT "OUTPOSTS OF THE COMPUTER.  IT WILL DO THE SAME TO YOU."
    b2c_printf("Outposts of the computer.  It will do the same to you.\n");
    // 01100 PRINT "THE ONE WHO DESTROYS ALL FOUR OF THE ENEMY'S PLATOONS"
    b2c_printf("The one who destroys all four of the enemy's platoons\n");
    // 01110 PRINT "FIRST IS THE WINNER."
    b2c_printf("First is the winner.\n");
    // 01120 PRINT
    b2c_printf("");
    // 01130 PRINT "GOOD LUCK... AND TELL US WHERE YOU WANT THE BODIES SENT!"
    b2c_printf("Good luck... And tell us where you want the bodies sent!\n");
    // 01140 PRINT
    b2c_printf("");
    // 01150 PRINT "TEAR OFF MATRIX AND USE IT TO CHECK OFF THE NUMBERS."
    b2c_printf("Tear off matrix and use it to check off the numbers.\n");
    // 01160 FOR R=1 TO 5: PRINT: NEXT R
    int dummy_1160=0; // Ignore this line.
}; // End-For(R_int)
// 01170 DIM M(100)
// 01180 FOR R=1 TO 5
for(R_int=1;R_int<=5;R_int++){
    // 01190 I=(R-1)*5+1
    I_int = (R_int-1)*5+1;
    // 01200 PRINT I,I+1,I+2,I+3,I+4
    b2c_printf(" %d 1}c_int+1_int+1_int+2_int+2_int+3_int+3_int+4\n",I_int);
    // 01210 NEXT R
    int dummy_1210=0; // Ignore this line.
}; // End-For(R_int)
// 01220 FOR R=1 TO 10: PRINT: NEXT R
int dummy_1220=0; // Ignore this line.
r* CName(const char*)}; // End-For(R_int)
r* CName(const char*)// 01230 C=INT(RND(1)*25)+1
r* CName(const char*)C_int = INT(RND(1)*25)+1;

  Lbl_01240:
r* CName(const char*)// 01240 D=INT(RND(1)*25)+1
r* CName(const char*)D_int = INT(RND(1)*25)+1;

  Lbl_01250:
r* CName(const char*)// 01250 E=INT(RND(1)*25)+1
r* CName(const char*)E_int = INT(RND(1)*25)+1;

  Lbl_01260:
r* CName(const char*)// 01260 F=INT(RND(1)*25)+1
r* CName(const char*)F_int = INT(RND(1)*25)+1;
r* CName(const char*)// 01270 IF C=D THEN 1240
r* CName(const char*)if(C_int==D_int)goto Lbl_01240;
r* CName(const char*)// 01280 IF C=E THEN 1250
r* CName(const char*)if(C_int==E_int)goto Lbl_01250;
r* CName(const char*)// 01290 IF C=F THEN 1260
r* CName(const char*)if(C_int==F_int)goto Lbl_01260;
r* CName(const char*)// 01300 IF D=E THEN 1250
r* CName(const char*)if(D_int==E_int)goto Lbl_01250;
r* CName(const char*)// 01310 IF D=F THEN 1260
r* CName(const char*)if(D_int==F_int)goto Lbl_01260;
r* CName(const char*)// 01320 IF E=F THEN 1260
r* CName(const char*)if(E_int==F_int)goto Lbl_01260;
r* CName(const char*)// 01330 PRINT "WHAT ARE YOUR FOUR POSITIONS";
r* CName(const char*)b2c_printf("What are your four positions");
r* CName(const char*)// 01340 INPUT G,H,K,L
r* CName(const char*)// Start of Basic INPUT statement 01340
r* CName(const char*){
int numargs=4;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout," ? ");
    int err=input(args,numargs,echoeol);
    if(err==0x03) break;
    if(err || 
        (err += b2c_strtoi(&G_int,args,0)) ||
        (err += b2c_strtoi(&H_int,args,1)) ||
        (err += b2c_strtoi(&K_int,args,2)) ||
        (err += b2c_strtoi(&L_int,args,3)) ){
         printf("?Redo from start\n");
    }else{
        break;
    };
};
r* CName(const char*)}; // End of Basic INPUT statement 01340
r* CName(const char*)// 01350 PRINT
r* CName(const char*)b2c_printf("");

  Lbl_01360:
r* CName(const char*)// 01360 PRINT "WHERE DO YOU WISH TO FIRE YOUR MISSLE";
r* CName(const char*)b2c_printf("Where do you wish to fire your missle");
r* CName(const char*)// 01370 INPUT Y
r* CName(const char*)// Start of Basic INPUT statement 01370
r* CName(const char*){
int numargs=1;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout," ? ");
    int err=input(args,numargs,echoeol);
    if(err==0x03) break;
    if(err || 
        (err += b2c_strtoi(&Y_int,args,0)) ){
         printf("?Redo from start\n");
    }else{
        break;
    };
};
r* CName(const char*)}; // End of Basic INPUT statement 01370
r* CName(const char*)// 01380 IF Y=C THEN 1540
r* CName(const char*)if(Y_int==C_int)goto Lbl_01540;
r* CName(const char*)// 01390 IF Y=D THEN 1540
r* CName(const char*)if(Y_int==D_int)goto Lbl_01540;
r* CName(const char*)// 01400 IF Y=E THEN 1540
r* CName(const char*)if(Y_int==E_int)goto Lbl_01540;
r* CName(const char*)// 01410 IF Y=F THEN 1540
r* CName(const char*)if(Y_int==F_int)goto Lbl_01540;
r* CName(const char*)// 01420 GOTO 1500
r* CName(const char*)goto Lbl_01500;

  Lbl_01430:
r* CName(const char*)// 01430 M=INT(RND(1)*25)+1
r* CName(const char*)M_int_arr[0] = INT(RND(1)*25)+1;
r* CName(const char*)// 01440 GOTO 1840
r* CName(const char*)goto Lbl_01840;

  Lbl_01450:
r* CName(const char*)// 01450 IF X=G THEN 1690
r* CName(const char*)if(X_int==G_int)goto Lbl_01690;
r* CName(const char*)// 01460 IF X=H THEN 1690
r* CName(const char*)if(X_int==H_int)goto Lbl_01690;
r* CName(const char*)// 01470 IF X=L THEN 1690
r* CName(const char*)if(X_int==L_int)goto Lbl_01690;
r* CName(const char*)// 01480 IF X=K THEN 1690
r* CName(const char*)if(X_int==K_int)goto Lbl_01690;
r* CName(const char*)// 01490 GOTO 1520
r* CName(const char*)goto Lbl_01520;

  Lbl_01500:
r* CName(const char*)// 01500 PRINT "HA, HA YOU MISSED. MY TURN NOW:"
r* CName(const char*)b2c_printf("Ha, ha you missed. My turn now:\n");
r* CName(const char*)// 01510 PRINT: PRINT: GOTO 1430
r* CName(const char*)goto Lbl_01430;

  Lbl_01520:
r* CName(const char*)// 01520 PRINT "I MISSED YOU, YOU DIRTY RAT. I PICKED";M". YOUR TURN:"
r* CName(const char*)b2c_printf("I missed you, you dirty rat. I picked %d I missed you, you dirty rat. I picked. Your turn:\n",M_int_arr[0]);
r* CName(const char*)// 01530 PRINT: PRINT: GOTO 1360
r* CName(const char*)goto Lbl_01360;

  Lbl_01540:
r* CName(const char*)// 01540 Q=Q+1
r* CName(const char*)Q_int = Q_int+1;
r* CName(const char*)// 01550 IF Q=4 THEN 1660
r* CName(const char*)if(Q_int==4)goto Lbl_01660;
r* CName(const char*)// 01560 PRINT "YOU GOT ONE OF MY OUTPOSTS!"
r* CName(const char*)b2c_printf("You got one of my outposts!\n");
r* CName(const char*)// 01570 IF Q=1 THEN 1600
r* CName(const char*)if(Q_int==1)goto Lbl_01600;
r* CName(const char*)// 01580 IF Q=2 THEN 1620
r* CName(const char*)if(Q_int==2)goto Lbl_01620;
r* CName(const char*)// 01590 IF Q=3 THEN 1640
r* CName(const char*)if(Q_int==3)goto Lbl_01640;

  Lbl_01600:
r* CName(const char*)// 01600 PRINT "ONE DOWN, THREE TO GO."
r* CName(const char*)b2c_printf("One down, three to go.\n");
r* CName(const char*)// 01610 PRINT: PRINT: GOTO 1430
r* CName(const char*)goto Lbl_01430;

  Lbl_01620:
r* CName(const char*)// 01620 PRINT "TWO DOWN, TWO TO GO."
r* CName(const char*)b2c_printf("Two down, two to go.\n");
r* CName(const char*)// 01630 PRINT: PRINT: GOTO 1430
r* CName(const char*)goto Lbl_01430;

  Lbl_01640:
r* CName(const char*)// 01640 PRINT "THREE DOWN, ONE TO GO."
r* CName(const char*)b2c_printf("Three down, one to go.\n");
r* CName(const char*)// 01650 PRINT: PRINT: GOTO 1430
r* CName(const char*)goto Lbl_01430;

  Lbl_01660:
r* CName(const char*)// 01660 PRINT "YOU GOT ME, I'M GOING FAST. BUT I'LL GET YOU WHEN"
r* CName(const char*)b2c_printf("You got me, i'm going fast. But i'll get you when\n");
r* CName(const char*)// 01670 PRINT "MY TRANSISTO&S RECUP%RA*E!"
r* CName(const char*)b2c_printf("My transisto&s recup%%ra*e!\n");
r* CName(const char*)// 01680 GOTO 1920
r* CName(const char*)goto Lbl_01920;

  Lbl_01690:
r* CName(const char*)// 01690 Z=Z+1
r* CName(const char*)Z_int = Z_int+1;
r* CName(const char*)// 01700 IF Z=4 THEN 1810
r* CName(const char*)if(Z_int==4)goto Lbl_01810;
r* CName(const char*)// 01710 PRINT "I GOT YOU. IT WON'T BE LONG NOW. POST";X;"WAS HIT."
r* CName(const char*)b2c_printf("I got you. It won't be long now. Post %d I got you. It won't be long now. PostWas hit.\n",X_int);
r* CName(const char*)// 01720 IF Z=1 THEN 1750
r* CName(const char*)if(Z_int==1)goto Lbl_01750;
r* CName(const char*)// 01730 IF Z=2 THEN 1770
r* CName(const char*)if(Z_int==2)goto Lbl_01770;
r* CName(const char*)// 01740 IF Z=3 THEN 1790
r* CName(const char*)if(Z_int==3)goto Lbl_01790;

  Lbl_01750:
r* CName(const char*)// 01750 PRINT "YOU HAVE ONLY THREE OUTPOSTS LEFT."
r* CName(const char*)b2c_printf("You have only three outposts left.\n");
r* CName(const char*)// 01760 PRINT: PRINT: GOTO 1360
r* CName(const char*)goto Lbl_01360;

  Lbl_01770:
r* CName(const char*)// 01770 PRINT "YOU HAVE ONLY TWO OUTPOSTS LEFT."
r* CName(const char*)b2c_printf("You have only two outposts left.\n");
r* CName(const char*)// 01780 PRINT: PRINT: GOTO 1360
r* CName(const char*)goto Lbl_01360;

  Lbl_01790:
r* CName(const char*)// 01790 PRINT "YOU HAVE ONLY ONE OUTPOST LEFT."
r* CName(const char*)b2c_printf("You have only one outpost left.\n");
r* CName(const char*)// 01800 PRINT: PRINT: GOTO 1360
r* CName(const char*)goto Lbl_01360;

  Lbl_01810:
r* CName(const char*)// 01810 PRINT "YOU'RE DEAD. YOUR LAST OUTPOST WAS AT";X;". HA, HA, HA."
r* CName(const char*)b2c_printf("You're dead. Your last outpost was at %d You're dead. Your last outpost was at. Ha, ha, ha.\n",X_int);
r* CName(const char*)// 01820 PRINT "BETTER LUCK NEXT TIME."
r* CName(const char*)b2c_printf("Better luck next time.\n");
r* CName(const char*)// 01830 GOTO 1920
r* CName(const char*)goto Lbl_01920;

  Lbl_01840:
r* CName(const char*)// 01840 P=P+1
r* CName(const char*)P_int = P_int+1;
r* CName(const char*)// 01850 N=P-1
r* CName(const char*)N_int = P_int-1;
r* CName(const char*)// 01860 FOR T=1 TO N
r* CName(const char*)for(T_int=1;T_int<=N_int;T_int++){
// 01870 IF M=M(T) THEN 1430
if(M_int_arr[0]==M_int_arr[T_int])goto Lbl_01430;
// 01880 NEXT T
int dummy_1880=0; // Ignore this line.
r* CName(const char*)}; // End-For(T_int)
r* CName(const char*)// 01890 X=M
r* CName(const char*)X_int = M_int_arr[0];
r* CName(const char*)// 01900 M(P)=M
r* CName(const char*)M_int_arr[P_int] = M_int_arr[0];
r* CName(const char*)// 01910 GOTO 1450
r* CName(const char*)goto Lbl_01450;

  Lbl_01920:
r* CName(const char*)// 01920 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
