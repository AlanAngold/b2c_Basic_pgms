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
int    A_int_arr[64];                             // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    F_int;                                     // Basic: F 
int    F1_int;                                    // Basic: F1 
int    F2_int;                                    // Basic: F2 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    M_int;                                     // Basic: M 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
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
    // 01000 PRINT TAB(30);"ONE CHECK"
    b2c_printf("One check\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT: PRINT: PRINT
    b2c_printf("");
    // 01030 DIM A(64)
    // 01040 PRINT "SOLITAIRE CHECKER PUZZLE BY DAVID AHL"
    b2c_printf("Solitaire checker puzzle by david ahl\n");
    // 01050 PRINT
    b2c_printf("");
    // 01060 PRINT "48 CHECKERS ARE PLACED ON THE 2 OUTSIDE SPACES OF A"
    b2c_printf("48 checkers are placed on the 2 outside spaces of a\n");
    // 01070 PRINT "STANDARD 64-SQUARE CHECKERBOARD.  THE OBJECT IS TO"
    b2c_printf("Standard 64-square checkerboard.  The object is to\n");
    // 01080 PRINT "REMOVE AS MANY CHECKERS AS POSSIBLE BY DIAGONAL JUMPS"
    b2c_printf("Remove as many checkers as possible by diagonal jumps\n");
    // 01090 PRINT "(AS IN STANDARD CHECKERS).  USE THE NUMBERED BOARD TO"
    b2c_printf("(as in standard checkers).  Use the numbered board to\n");
    // 01100 PRINT "INDICATE THE SQUARE YOU WISH TO JUMP FROM AND TO.  ON"
    b2c_printf("Indicate the square you wish to jump from and to.  On\n");
    // 01110 PRINT "THE BOARD PRINTED OUT ON EACH TURN '1' INDICATES A"
    b2c_printf("The board printed out on each turn '1' indicates a\n");
    // 01120 PRINT "CHECKER AND '0' AN EMPTY SQUARE.  WHEN YOU HAVE NO"
    b2c_printf("Checker and '0' an empty square.  When you have no\n");
    // 01130 PRINT "POSSIBLE JUMPS REMAINING, INPUT A '0' IN RESPONSE TO"
    b2c_printf("Possible jumps remaining, input a '0' in response to\n");
    // 01140 PRINT "QUESTION 'JUMP FROM ?'"
    b2c_printf("Question 'jump from ?'\n");
    // 01150 PRINT
    b2c_printf("");
    // 01160 PRINT "HERE IS THE NUMERICAL BOARD:"
    b2c_printf("Here is the numerical board:\n");
    // 01170 PRINT
    b2c_printf("");

  Lbl_01180:
    // 01180 FOR J=1 TO 57 STEP 8
    for(J_int=1;J_int<=57;J_int+=8){
        // 01190 PRINT J;TAB(4);J+1;TAB(8);J+2;TAB(12);J+3;TAB(16);J+4;TAB(20);J+5;
        b2c_printf(" %d [O 5[[O 5[_int+1_int+1_int+1_int+2_int+2_int+2_int+3_int+3_int+3_int+4_int+4_int+4_int+5_int+5\n",J_int);
        // 01200 PRINT TAB(24);J+6;TAB(28);J+7
        b2c_printf("");
        // 01210 NEXT J
        int dummy_1210=0; // Ignore this line.
    }; // End-For(J_int)
    // 01220 PRINT
    b2c_printf("");
    // 01230 PRINT "AND HERE IS THE OPENING POSITION OF THE CHECKERS."
    b2c_printf("And here is the opening position of the checkers.\n");
    // 01240 PRINT
    b2c_printf("");
    // 01250 FOR J=1 TO 64
    for(J_int=1;J_int<=64;J_int++){
        // 01260 A(J)=1
        A_int_arr[J_int] = 1;
        // 01270 NEXT J
        int dummy_1270=0; // Ignore this line.
    }; // End-For(J_int)
    // 01280 FOR J=19 TO 43 STEP 8
    for(J_int=19;J_int<=43;J_int+=8){
        // 01290 FOR I=J TO J+3
        for(I_int=J_int;I_int<=J_int+3;I_int++){
            // 01300 A(I)=0
            A_int_arr[I_int] = 0;
            // 01310 NEXT I
            int dummy_1310=0; // Ignore this line.
        }; // End-For(I_int)
        // 01320 NEXT J
        int dummy_1320=0; // Ignore this line.
    }; // End-For(J_int)
    // 01330 M=0
    M_int = 0;
    // 01340 GOTO 1620
    goto Lbl_01620;

  Lbl_01350:
    // 01350 INPUT "JUMP FROM";F
    // Start of Basic INPUT statement 01350
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""JUMP FROM"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&F_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01350
    // 01360 IF F=0 THEN 1710
    if(F_int==0)goto Lbl_01710;
    // 01370 INPUT "TO";T
    // Start of Basic INPUT statement 01370
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""TO"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&T_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01370
    // 01380 PRINT
    b2c_printf("");
    // 01390 REM *** CHECK LEGALITY OF MOVE
    // 01400 F1=INT((F-1)/8)
    F1_int = INT((F_int-1)/8);
    // 01410 F2=F-8*F1
    F2_int = F_int-8*F1_int;
    // 01420 T1=INT((T-1)/8)
    T1_int = INT((T_int-1)/8);
    // 01430 T2=T-8*T1
    T2_int = T_int-8*T1_int;
    // 01440 IF F1>7 THEN 1540
    if(F1_int>7)goto Lbl_01540;
    // 01450 IF T1>7 THEN 1540
    if(T1_int>7)goto Lbl_01540;
    // 01460 IF F2>8 THEN 1540
    if(F2_int>8)goto Lbl_01540;
    // 01470 IF T2>8 THEN 1540
    if(T2_int>8)goto Lbl_01540;
    // 01480 IF ABS(F1-T1)<>2 THEN 1540
    if(ABS(F1_int-T1_int)!=2)goto Lbl_01540;
    // 01490 IF ABS(F2-T2)<>2 THEN 1540
    if(ABS(F2_int-T2_int)!=2)goto Lbl_01540;
    // 01500 IF A((T+F)/2)=0 THEN 1540
    if(A_int_arr[(T_int+F_int)/2]==0)goto Lbl_01540;
    // 01510 IF A(F)=0 THEN 1540
    if(A_int_arr[F_int]==0)goto Lbl_01540;
    // 01520 IF A(T)=1 THEN 1540
    if(A_int_arr[T_int]==1)goto Lbl_01540;
    // 01530 GOTO 1570
    goto Lbl_01570;

  Lbl_01540:
    // 01540 PRINT "ILLEGAL MOVE.  TRY AGAIN..."
    b2c_printf("Illegal move.  Try again...\n");
    // 01550 GOTO 1350
    goto Lbl_01350;
    // 01560 REM *** UPDATE BOARD

  Lbl_01570:
    // 01570 A(T)=1
    A_int_arr[T_int] = 1;
    // 01580 A(F)=0
    A_int_arr[F_int] = 0;
    // 01590 A((T+F)/2)=0
    A_int_arr[(T_int+F_int)/2] = 0;
    // 01600 M=M+1
    M_int = M_int+1;
    // 01610 REM *** PRINT BOARD

  Lbl_01620:
    // 01620 FOR J=1 TO 57 STEP 8
    for(J_int=1;J_int<=57;J_int+=8){
        // 01630 FOR I=J TO J+7
        for(I_int=J_int;I_int<=J_int+7;I_int++){
            // 01640 PRINT A(I);
            b2c_printf(" %d gO 5[\n",A_int_arr[I_int]);
            // 01650 NEXT I
            int dummy_1650=0; // Ignore this line.
        }; // End-For(I_int)
        // 01660 PRINT
        b2c_printf("");
        // 01670 NEXT J
        int dummy_1670=0; // Ignore this line.
    }; // End-For(J_int)
    // 01680 PRINT
    b2c_printf("");
    // 01690 GOTO 1350
    goto Lbl_01350;
    // 01700 REM *** END GAME SUMMARY

  Lbl_01710:
    // 01710 S=0
    S_int = 0;
    // 01720 FOR I=1 TO 64
    for(I_int=1;I_int<=64;I_int++){
        // 01730 S=S+A(I)
        S_int = S_int+A_int_arr[I_int];
        // 01740 NEXT I
        int dummy_1740=0; // Ignore this line.
    }; // End-For(I_int)
    // 01750 PRINT:PRINT "YOU MADE";M;"JUMPS AND HAD";S;"PIECES"
    b2c_printf("You made %d You madeJumps and hadJumps and had %d Jumps and hadPieces\n",M_int,S_int);
    // 01760 PRINT "REMAINING ON THE BOARD."
    b2c_printf("Remaining on the board.\n");
    // 01770 PRINT
    b2c_printf("");

  Lbl_01780:
    // 01780 INPUT "TRY AGAIN";A$
    // Start of Basic INPUT statement 01780
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout,""TRY AGAIN"");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&A_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01780
    // 01790 IF A$="YES" THEN 1180
    if(strcmp(A_str,"Yes")==0)goto Lbl_01180;
    // 01800 IF A$="NO" THEN 1830
    if(strcmp(A_str,"No")==0)goto Lbl_01830;
    // 01810 PRINT "PLEASE ANSWER 'YES' OR 'NO'."
    b2c_printf("Please answer 'yes' or 'no'.\n");
    // 01820 GOTO 1780
    goto Lbl_01780;

  Lbl_01830:
    // 01830 PRINT
    b2c_printf("");
    // 01840 PRINT "O.K.  HOPE YOU HAD FUN!!"
    b2c_printf("O.K.  Hope you had fun!!\n");
    // 01850 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
