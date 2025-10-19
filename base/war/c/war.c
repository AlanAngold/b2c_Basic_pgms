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
char* data_01590s[]={"S-2","H-2","C-2","D-2","S-3","H-3","C-3","D-3","S-4","H-4","C-4","D-4","S-5","H-5","C-5"};
char* data_01600s[]={"D-5","S-6","H-6","C-6","D-6","S-7","H-7","C-7","D-7","S-8","H-8","C-8","D-8","S-9","H-9"};
char* data_01610s[]={"C-9","D-9","S10","H-10","C-10","D-10","S-J","H-J","C-J","D-J","S-Q","H-Q","C-Q","D-Q"};
char* data_01620s[]={"S-K","H-K","C-K","D-K","S-A","H-A","C-A","D-A"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1590, 15,data_01590s},
    { 1600, 15,data_01600s},
    { 1610, 14,data_01610s},
    { 1620,  8,data_01620s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[52];                             // Basic: A$ 
int    A1_int;                                    // Basic: A1 
char*  B_str;                                     // Basic: B$ 
int    B1_int;                                    // Basic: B1 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    K_int;                                     // Basic: K 
int    L_int_arr[54];                             // Basic: L 
int    M1_int;                                    // Basic: M1 
int    M2_int;                                    // Basic: M2 
int    N1_int;                                    // Basic: N1 
int    N2_int;                                    // Basic: N2 
int    P_int;                                     // Basic: P 
char*  V_str;                                     // Basic: V$ 
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
    // 01000 PRINT "BASIC LIBRARY--'WAR'--18-JUL-70"
    b2c_printf("Basic library--'war'--18-jul-70\n");
    // 01010 REM  *  *  *  *  *  *   MAIN PROGRAM   *  *  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 PRINT "THIS IS THE CARD GAME OF WAR.  EACH CARD IS GIVEN BY SUIT-#"
    b2c_printf("This is the card game of war.  Each card is given by suit-#\n");
    // 01040 PRINT "AS S-7 FOR SPADE 7.  "
    b2c_printf("As s-7 for spade 7.  \n");

  Lbl_01050:
    // 01050 PRINT "DO YOU WANT DIRECTIONS"
    b2c_printf("Do you want directions\n");
    // 01060 INPUT B$
    // Start of Basic INPUT statement 01060
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&B_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF B$="N" THEN 1140
    if(strcmp(B_str,"N")==0)goto Lbl_01140;
    // 01080 IF B$="Y" THEN 1110
    if(strcmp(B_str,"Y")==0)goto Lbl_01110;
    // 01090 PRINT "Y OR N, PLEASE.  ";
    b2c_printf("Y or n, please.  ");
    // 01100 GO TO 1050
    goto Lbl_01050;

  Lbl_01110:
    // 01110 PRINT "THE PDP-10 GIVES YOU AND IT A 'CARD'.  THE HIGHER 'CARD' "
    b2c_printf("The pdp-10 gives you and it a 'card'.  The higher 'card' \n");
    // 01120 PRINT "(NUMERICALLY) WINS.  THE GAME ENDS WHEN YOU CHOOSE NT"
    b2c_printf("(numerically) wins.  The game ends when you choose nt\n");
    // 01130 PRINT " TO CONTINUE OR WHEN YOU HAVE FINISHED THE PACK."
    b2c_printf(" to continue or when you have finished the pack.\n");

  Lbl_01140:
    // 01140 PRINT
    b2c_printf("");
    // 01150 PRINT
    b2c_printf("");
    // 01160 DIM A$(52), L(54)
    // 01170 FOR I=1 TO 52
    for(I_int=1;I_int<=52;I_int++){
        // 01180 READ A$(I)
        A_str_arr[I_int] = Get_Data_String();
        // 01190 NEXT I
        int dummy_1190=0; // Ignore this line.
    }; // End-For(I_int)
    // 01200 RANDOM
    RANDOMIZE();
    // 01210 FOR J=1 TO 52
    for(J_int=1;J_int<=52;J_int++){
        // 01220 LET L(J)=INT(52*RND+1)
        L_int_arr[J_int] = INT(52*RND()+1);
        // 01230 FOR K=1 TO J-1
        for(K_int=1;K_int<=J_int-1;K_int++){
            // 01240 IF L(K)<>L(J) THEN 1270
            if(L_int_arr[K_int]!=L_int_arr[J_int])goto Lbl_01270;
            // 01250 LET J=J-1
            J_int = J_int-1;
            // 01260 GO TO 1280
            goto Lbl_01280;

  Lbl_01270:
            // 01270 NEXT K
            int dummy_1270=0; // Ignore this line.
        }; // End-For(K_int)

  Lbl_01280:
        // 01280 NEXT J
        int dummy_1280=0; // Ignore this line.
    }; // End-For(J_int)

  Lbl_01290:
    // 01290 LET P=P+1
    P_int = P_int+1;
    // 01300 LET M1=L(P)
    M1_int = L_int_arr[P_int];
    // 01310 LET P=P+1
    P_int = P_int+1;
    // 01320 LET M2=L(P)
    M2_int = L_int_arr[P_int];
    // 01330 PRINT
    b2c_printf("");
    // 01340 PRINT
    b2c_printf("");
    // 01350 PRINT "YOU: ";A$(M1), "PDP-10: ";A$(M2),
    b2c_printf("You: %sYou: Pdp-10: Pdp-10: %sPdp-10: \n",A_str_arr[M1_int],A_str_arr[M2_int]);
    // 01360 LET N1=INT((M1-.5)/4)
    N1_int = INT((M1_int-0.5)/4);
    // 01370 LET N2=INT((M2-.5)/4)
    N2_int = INT((M2_int-0.5)/4);
    // 01380 IF N1>=N2 THEN 1420
    if(N1_int>=N2_int)goto Lbl_01420;
    // 01390 LET A1=A1+1
    A1_int = A1_int+1;
    // 01400 PRINT"PDP-10 WINS. YOU HAVE";B1;"; PDP-10 HAS";A1
    b2c_printf("Pdp-10 wins. You have %d Pdp-10 wins. You have; pdp-10 has; pdp-10 has %d \n",B1_int,A1_int);
    // 01410 GO TO 1470
    goto Lbl_01470;

  Lbl_01420:
    // 01420 IF N1=N2 THEN 1460
    if(N1_int==N2_int)goto Lbl_01460;
    // 01430 LET B1=B1+1
    B1_int = B1_int+1;
    // 01440 PRINT "YOU WIN.  YOU HAVE";B1;"; PDP-10 HAS";A1
    b2c_printf("You win.  You have %d You win.  You have; pdp-10 has; pdp-10 has %d \n",B1_int,A1_int);
    // 01450 GO TO 1470
    goto Lbl_01470;

  Lbl_01460:
    // 01460 PRINT "TIE. N SCORE CHANGE."
    b2c_printf("Tie. N score change.\n");

  Lbl_01470:
    // 01470 IF L(P+1)= 0 THEN 1540
    if(L_int_arr[P_int+1]==0)goto Lbl_01540;
    // 01480 PRINT "DO YOU WANT TO CONTINUE";
    b2c_printf("Do you want to continue");

  Lbl_01490:
    // 01490 INPUT V$
    // Start of Basic INPUT statement 01490
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&V_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01490
    // 01500 IF V$="Y" THEN 1290
    if(strcmp(V_str,"Y")==0)goto Lbl_01290;
    // 01510 IF V$="NO" THEN 1580
    if(strcmp(V_str,"No")==0)goto Lbl_01580;
    // 01520 PRINT"Y OR NO, PLEASE.  ";
    b2c_printf("Y or no, please.  ");
    // 01530 GO TO 1490
    goto Lbl_01490;

  Lbl_01540:
    // 01540 PRINT
    b2c_printf("");
    // 01550 PRINT" "
    b2c_printf(" \n");
    // 01560 PRINT"YOU HAVE RUN OUT OF CARDS. FINAL SCORE: YOU--";B1
    b2c_printf("You have run out of cards. Final score: you-- %d \n",B1_int);
    // 01570 PRINTTAB(40);"PDP-10--";A1
    b2c_printf("Pdp-10-- %d \n",A1_int);

  Lbl_01580:
    // 01580 PRINT"THANKS FOR PLAYING. IT WAS FUN."
    b2c_printf("Thanks for playing. It was fun.\n");
    // 01590 DATA S-2,H-2,C-2,D-2,S-3,H-3,C-3,D-3,S-4,H-4,C-4,D-4,S-5,H-5,C-5
    // 01600 DATA D-5,S-6,H-6,C-6,D-6,S-7,H-7,C-7,D-7,S-8,H-8,C-8,D-8,S-9,H-9
    // 01610 DATA C-9,D-9,S10,H-10,C-10,D-10,S-J,H-J,C-J,D-J,S-Q,H-Q,C-Q,D-Q
    // 01620 DATA S-K,H-K,C-K,D-K,S-A,H-A,C-A,D-A
    // 01630 STOP
    exit(1);
    // 01640 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
