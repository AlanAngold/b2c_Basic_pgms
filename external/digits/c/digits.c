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
char* data_01180s[]={"0","1","3"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1180,  3,data_01180s},
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
int    E_int;                                     // Basic: E 
int    G_int;                                     // Basic: G 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int_arr[2][2];                           // Basic: K 
int    L_int_arr[8][2];                           // Basic: L 
int    M_int_arr[26][2];                          // Basic: M 
int    N_int_arr[10];                             // Basic: N 
int    Q_int;                                     // Basic: Q 
int    S_int;                                     // Basic: S 
int    S1_int;                                    // Basic: S1 
int    T_int;                                     // Basic: T 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
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
    // 01000 PRINT TAB(33);"DIGITS"
    b2c_printf("Digits\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 PRINT "THIS IS A GAME OF GUESSING."
    b2c_printf("This is a game of guessing.\n");
    // 01040 PRINT "FOR INSTRUCTIONS, TYPE '1', ELSE TYPE '0'";
    b2c_printf("For instructions, type '1', else type '0'");
    // 01050 INPUT E
    // Start of Basic INPUT statement 01050
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&E_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01050
    // 01060 IF E=0 THEN 1170
    if(E_int==0)goto Lbl_01170;
    // 01070 PRINT
    b2c_printf("");
    // 01080 PRINT "PLEASE TAKE A PIECE OF PAPER AND WRITE DOWN"
    b2c_printf("Please take a piece of paper and write down\n");
    // 01090 PRINT "THE DIGITS '0', '1', OR '2' THIRTY TIMES AT RANDOM."
    b2c_printf("The digits '0', '1', or '2' thirty times at random.\n");
    // 01100 PRINT "ARRANGE THEM IN THREE LINES OF TEN DIGITS EACH."
    b2c_printf("Arrange them in three lines of ten digits each.\n");
    // 01110 PRINT "I WILL ASK FOR THEN TEN AT A TIME."
    b2c_printf("I will ask for then ten at a time.\n");
    // 01120 PRINT "I WILL ALWAYS GUESS THEM FIRST AND THEN LOOK AT YOUR"
    b2c_printf("I will always guess them first and then look at your\n");
    // 01130 PRINT "NEXT NUMBER TO SEE IF I WAS RIGHT. BY PURE LUCK,"
    b2c_printf("Next number to see if i was right. By pure luck,\n");
    // 01140 PRINT "I OUGHT TO BE RIGHT TEN TIMES. BUT I HOPE TO DO BETTER"
    b2c_printf("I ought to be right ten times. But i hope to do better\n");
    // 01150 PRINT "THAN THAT *****"
    b2c_printf("Than that *****\n");
    // 01160 PRINT:PRINT
    b2c_printf("");

  Lbl_01170:
    // 01170 READ A,B,C
    A_int = Get_Data_Int();
    B_int = Get_Data_Int();
    C_int = Get_Data_Int();
    // 01180 DATA 0,1,3
    // 01190 DIM M(26,2),K(2,2),L(8,2)

  Lbl_01200:
    // 01200 FOR I=0 TO 26: FOR J=0 TO 2: M(I,J)=1: NEXT J: NEXT I
    int dummy_1200=0; // Ignore this line.
}; // End-For(I_int)
// 01210 FOR I=0 TO 2: FOR J=0 TO 2: K(I,J)=9: NEXT J: NEXT I
int dummy_1210=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01220 FOR I=0 TO 8: FOR J=0 TO 2: L(I,J)=3: NEXT J: NEXT I
r* CName(const char*)int dummy_1220=0; // Ignore this line.
Name(const char*)}; // End-For(I_int)
Name(const char*)// 01230 L(0,0)=2: L(4,1)=2: L(8,2)=2
Name(const char*)L_int_arr[8][2] = 2;
Name(const char*)// 01240 Z=26: Z1=8: Z2=2
Name(const char*)Z2_int = 2;
Name(const char*)// 01250 X=0
Name(const char*)X_int = 0;
Name(const char*)// 01260 FOR T=1 TO 3
Name(const char*)for(T_int=1;T_int<=3;T_int++){

  Lbl_01270:
r* CName(const char*)// 01270 PRINT
r* CName(const char*)b2c_printf("");
r* CName(const char*)// 01280 PRINT "TEN NUMBERS, PLEASE";
r* CName(const char*)b2c_printf("Ten numbers, please");
r* CName(const char*)// 01290 INPUT N(1),N(2),N(3),N(4),N(5),N(6),N(7),N(8),N(9),N(10)
r* CName(const char*)// Start of Basic INPUT statement 01290
r* CName(const char*){
int numargs=10;
char *args[numargs+1];
bool echoeol=true;
while(true){
    fprintf(stdout," ? ");
    int err=input(args,numargs,echoeol);
    if(err==0x03) break;
    if(err || 
        (err += b2c_strtoi(&N_int_arr[1],args,0)) ||
        (err += b2c_strtoi(&N_int_arr[2],args,1)) ||
        (err += b2c_strtoi(&N_int_arr[3],args,2)) ||
        (err += b2c_strtoi(&N_int_arr[4],args,3)) ||
        (err += b2c_strtoi(&N_int_arr[5],args,4)) ||
        (err += b2c_strtoi(&N_int_arr[6],args,5)) ||
        (err += b2c_strtoi(&N_int_arr[7],args,6)) ||
        (err += b2c_strtoi(&N_int_arr[8],args,7)) ||
        (err += b2c_strtoi(&N_int_arr[9],args,8)) ||
        (err += b2c_strtoi(&N_int_arr[10],args,9)) ){
         printf("?Redo from start\n");
    }else{
        break;
    };
};
r* CName(const char*)}; // End of Basic INPUT statement 01290
r* CName(const char*)// 01300 FOR I=1 TO 10
r* CName(const char*)for(I_int=1;I_int<=10;I_int++){
// 01310 W=N(I)-1
W_int = N_int_arr[I_int]-1;
// 01320 IF W=SGN(W) THEN 1350
if(W_int==SGN(W_int))goto Lbl_01350;
// 01330 PRINT "ONLY USE THE DIGITS '0', '1', OR '2'."
b2c_printf("Only use the digits '0', '1', or '2'.\n");
// 01340 PRINT "LET'S TRY AGAIN.":GOTO 1270
goto Lbl_01270;

  Lbl_01350:
// 01350 NEXT I
int dummy_1350=0; // Ignore this line.
r* CName(const char*)}; // End-For(I_int)
r* CName(const char*)// 01360 PRINT: PRINT "MY GUESS","YOUR NO.","RESULT","NO. RIGHT":PRINT
r* CName(const char*)b2c_printf("");
r* CName(const char*)// 01370 FOR U=1 TO 10
r* CName(const char*)for(U_int=1;U_int<=10;U_int++){
// 01380 N=N(U): S=0
S_int = 0;
// 01390 FOR J=0 TO 2
for(J_int=0;J_int<=2;J_int++){
    // 01400 S1=A*K(Z2,J)+B*L(Z1,J)+C*M(Z,J)
    S1_int = A_int*K_int_arr[Z2_int][J_int]+B_int*L_int_arr[Z1_int][J_int]+C_int*M_int_arr[Z_int][J_int];
    // 01410 IF S>S1 THEN 1450
    if(S_int>S1_int)goto Lbl_01450;
    // 01420 IF S<S1 THEN 1440
    if(S_int<S1_int)goto Lbl_01440;
    // 01430 IF RND(1)<.5 THEN 1450
    if(RND(1)<0.5)goto Lbl_01450;

  Lbl_01440:
    // 01440 S=S1: G=J
    G_int = J_int;

  Lbl_01450:
    // 01450 NEXT J
    int dummy_1450=0; // Ignore this line.
}; // End-For(J_int)
// 01460 PRINT "  ";G,"   ";N(U),
b2c_printf("   %d          %d    \n",G_int,N_int_arr[U_int]);
// 01470 IF G=N(U) THEN 1500
if(G_int==N_int_arr[U_int])goto Lbl_01500;
// 01480 PRINT " WRONG",X
b2c_printf(" wrong %d \n",X_int);
// 01490 GOTO 1570
goto Lbl_01570;

  Lbl_01500:
// 01500 X=X+1
X_int = X_int+1;
// 01510 PRINT " RIGHT",X
b2c_printf(" right %d \n",X_int);
// 01520 M(Z,N)=M(Z,N)+1
M_int_arr[Z_int][N_int_arr[0]] = M_int_arr[Z_int][N_int_arr[0]]+1;
// 01530 L(Z1,N)=L(Z1,N)+1
L_int_arr[Z1_int][N_int_arr[0]] = L_int_arr[Z1_int][N_int_arr[0]]+1;
// 01540 K(Z2,N)=K(Z2,N)+1
K_int_arr[Z2_int][N_int_arr[0]] = K_int_arr[Z2_int][N_int_arr[0]]+1;
// 01550 Z=Z-INT(Z/9)*9
Z_int = Z_int-INT(Z_int/9)*9;
// 01560 Z=3*Z+N(U)
Z_int = 3*Z_int+N_int_arr[U_int];

  Lbl_01570:
// 01570 Z1=Z-INT(Z/9)*9
Z1_int = Z_int-INT(Z_int/9)*9;
// 01580 Z2=N(U)
Z2_int = N_int_arr[U_int];
// 01590 NEXT U
int dummy_1590=0; // Ignore this line.
r* CName(const char*)}; // End-For(U_int)
r* CName(const char*)// 01600 NEXT T
r* CName(const char*)int dummy_1600=0; // Ignore this line.
Name(const char*)}; // End-For(T_int)
Name(const char*)// 01610 PRINT
Name(const char*)b2c_printf("");
Name(const char*)// 01620 IF X>10 THEN 1670
Name(const char*)if(X_int>10)goto Lbl_01670;
Name(const char*)// 01630 IF X<10 THEN 1700
Name(const char*)if(X_int<10)goto Lbl_01700;
Name(const char*)// 01640 PRINT "I GUESSED EXACTLY 1/3 OF YOUR NUMBERS."
Name(const char*)b2c_printf("I guessed exactly 1/3 of your numbers.\n");
Name(const char*)// 01650 PRINT "IT'S A TIE GAME."
Name(const char*)b2c_printf("It's a tie game.\n");
Name(const char*)// 01660 GOTO 1720
Name(const char*)goto Lbl_01720;

  Lbl_01670:
Name(const char*)// 01670 PRINT "I GUESSED MORE THAN 1/3 OF YOUR NUMBERS."
Name(const char*)b2c_printf("I guessed more than 1/3 of your numbers.\n");
Name(const char*)// 01680 PRINT "I WIN.": FOR Q=1 TO 10: PRINT CHR$(7);: NEXT Q
Name(const char*)int dummy_1680=0; // Ignore this line.
(const char*)}; // End-For(Q_int)
(const char*)// 01690 GOTO 1720
(const char*)goto Lbl_01720;

  Lbl_01700:
(const char*)// 01700 PRINT "I GUESSED LESS THAN 1/3 OF YOUR NUMBERS."
(const char*)b2c_printf("I guessed less than 1/3 of your numbers.\n");
(const char*)// 01710 PRINT "YOU BEAT ME.  CONGRATULATIONS *****"
(const char*)b2c_printf("You beat me.  Congratulations *****\n");

  Lbl_01720:
(const char*)// 01720 PRINT
(const char*)b2c_printf("");
(const char*)// 01730 PRINT "DO YOU WANT TO TRY AGAIN (1 FOR YES, 0 FOR NO)";
(const char*)b2c_printf("Do you want to try again (1 for yes, 0 for no)");
(const char*)// 01740 INPUT X
(const char*)// Start of Basic INPUT statement 01740
(const char*){
Name(const char*)int numargs=1;
Name(const char*)char *args[numargs+1];
Name(const char*)bool echoeol=true;
Name(const char*)while(true){
r* CName(const char*)fprintf(stdout," ? ");
r* CName(const char*)int err=input(args,numargs,echoeol);
r* CName(const char*)if(err==0x03) break;
r* CName(const char*)if(err || 
(err += b2c_strtoi(&X_int,args,0)) ){
 printf("?Redo from start\n");
r* CName(const char*)}else{
r* CName(const char*)    break;
r* CName(const char*)};
Name(const char*)};
(const char*)}; // End of Basic INPUT statement 01740
(const char*)// 01750 IF X=1 THEN 1200
(const char*)if(X_int==1)goto Lbl_01200;
(const char*)// 01760 PRINT:PRINT "THANKS FOR THE GAME."
(const char*)b2c_printf("Thanks for the game.\n");
(const char*)// 01770 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
