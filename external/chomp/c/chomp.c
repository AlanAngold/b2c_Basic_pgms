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
int    A_int_arr[10][10];                         // Basic: A 
int    C_int;                                     // Basic: C 
int    C1_int;                                    // Basic: C1 
int    F_int;                                     // Basic: F 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    J_int;                                     // Basic: J 
int    P_int;                                     // Basic: P 
int    P1_int;                                    // Basic: P1 
int    R_int;                                     // Basic: R 
char*  R_str;                                     // Basic: R$ 
int    R1_int;                                    // Basic: R1 
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
    // 01000 PRINT TAB(33);"CHOMP"
    b2c_printf("Chomp\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 DIM A(10,10)
    // 01040 REM *** THE GAME OF CHOMP *** COPYRIGHT PCC 1973 ***
    // 01050 PRINT 
    b2c_printf("");
    // 01060 PRINT "THIS IS THE GAME OF CHOMP (SCIENTIFIC AMERICAN, JAN 1973)"
    b2c_printf("This is the game of chomp (scientific american, jan 1973)\n");
    // 01070 PRINT "DO YOU WANT THE RULES (1=YES, 0=NO!)";
    b2c_printf("Do you want the rules (1=yes, 0=no!)");
    // 01080 INPUT R
    // Start of Basic INPUT statement 01080
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01080
    // 01090 IF R=0 THEN 1280
    if(R_int==0)goto Lbl_01280;
    // 01100 F=1
    F_int = 1;
    // 01110 R=5
    R_int = 5;
    // 01120 C=7
    C_int = 7;
    // 01130 PRINT "CHOMP IS FOR 1 OR MORE PLAYERS (HUMANS ONLY)."
    b2c_printf("Chomp is for 1 or more players (humans only).\n");
    // 01140 PRINT
    b2c_printf("");
    // 01150 PRINT "HERE'S HOW A BOARD LOOKS (THIS ONE IS 5 BY 7):"
    b2c_printf("Here's how a board looks (this one is 5 by 7):\n");
    // 01160 GOSUB 1510
    Routine_01510();
    // 01170 PRINT
    b2c_printf("");
    // 01180 PRINT "THE BOARD IS A BIG COOKIE - R ROWS HIGH AND C COLUMNS"
    b2c_printf("The board is a big cookie - r rows high and c columns\n");
    // 01190 PRINT "WIDE. YOU INPUT R AND C AT THE START. IN THE UPPER LEFT"
    b2c_printf("Wide. You input r and c at the start. In the upper left\n");
    // 01200 PRINT "CORNER OF THE COOKIE IS A POISON SQUARE (P). THE ONE WHO"
    b2c_printf("Corner of the cookie is a poison square (p). The one who\n");
    // 01210 PRINT "CHOMPS THE POISON SQUARE LOSES. TO TAKE A CHOMP, TYPE THE"
    b2c_printf("Chomps the poison square loses. To take a chomp, type the\n");
    // 01220 PRINT "ROW AND COLUMN OF ONE OF THE SQUARES ON THE COOKIE."
    b2c_printf("Row and column of one of the squares on the cookie.\n");
    // 01230 PRINT "ALL OF THE SQUARES BELOW AND TO THE RIGHT OF THAT SQUARE"
    b2c_printf("All of the squares below and to the right of that square\n");
    // 01240 PRINT "(INCLUDING THAT SQUARE, TOO) DISAPPEAR -- CHOMP!!"
    b2c_printf("(including that square, too) disappear -- chomp!!\n");
    // 01250 PRINT "NO FAIR CHOMPING SQUARES THAT HAVE ALREADY BEEN CHOMPED,"
    b2c_printf("No fair chomping squares that have already been chomped,\n");
    // 01260 PRINT "OR THAT ARE OUTSIDE THE ORIGINAL DIMENSIONS OF THE COOKIE."
    b2c_printf("Or that are outside the original dimensions of the cookie.\n");
    // 01270 PRINT 
    b2c_printf("");

  Lbl_01280:
    // 01280 PRINT "HERE WE GO..."
    b2c_printf("Here we go...\n");
    // 01290 REM 
    // 01300 F=0
    F_int = 0;
    // 01310 FOR I=1 TO 10
    for(I_int=1;I_int<=10;I_int++){
        // 01320 FOR J=1 TO 10
        for(J_int=1;J_int<=10;J_int++){
            // 01330 A(I,J)=0
            A_int_arr[I_int][J_int] = 0;
            // 01340 NEXT J
            int dummy_1340=0; // Ignore this line.
        }; // End-For(J_int)
        // 01350 NEXT I
        int dummy_1350=0; // Ignore this line.
    }; // End-For(I_int)
    // 01360 PRINT 
    b2c_printf("");
    // 01370 PRINT "HOW MANY PLAYERS";
    b2c_printf("How many players");
    // 01380 INPUT P
    // Start of Basic INPUT statement 01380
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
    }; // End of Basic INPUT statement 01380
    // 01390 I1=0
    I1_int = 0;

  Lbl_01400:
    // 01400 PRINT "HOW MANY ROWS";
    b2c_printf("How many rows");
    // 01410 INPUT R
    // Start of Basic INPUT statement 01410
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01410
    // 01420 IF R <= 9 THEN 1450
    if(R_int<=9)goto Lbl_01450;
    // 01430 PRINT "TOO MANY ROWS (9 IS MAXIMUM). NOW, ";
    b2c_printf("Too many rows (9 is maximum). Now, ");
    // 01440 GOTO 1400
    goto Lbl_01400;

  Lbl_01450:
    // 01450 PRINT "HOW MANY COLUMNS";
    b2c_printf("How many columns");
    // 01460 INPUT C
    // Start of Basic INPUT statement 01460
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
    }; // End of Basic INPUT statement 01460
    // 01470 IF C <= 9 THEN 1500
    if(C_int<=9)goto Lbl_01500;
    // 01480 PRINT "TOO MANY COLUMNS (9 IS MAXIMUM). NOW, ";
    b2c_printf("Too many columns (9 is maximum). Now, ");
    // 01490 GOTO 1450
    goto Lbl_01450;

  Lbl_01500:
    // 01500 PRINT 
    b2c_printf("");

void Routine_01510(){
    // 01510 FOR I=1 TO R
    for(I_int=1;I_int<=R_int;I_int++){
        // 01520 FOR J=1 TO C
        for(J_int=1;J_int<=C_int;J_int++){
            // 01530 A(I,J)=1
            A_int_arr[I_int][J_int] = 1;
            // 01540 NEXT J
            int dummy_1540=0; // Ignore this line.
        }; // End-For(J_int)
        // 01550 NEXT I
        int dummy_1550=0; // Ignore this line.
    }; // End-For(I_int)
    // 01560 A(1,1)=-1
    A_int_arr[1][1] = -1;
    // 01570 REM PRINT THE BOARD

  Lbl_01580:
    // 01580 PRINT 
    b2c_printf("");
    // 01590 PRINT TAB(7);"1 2 3 4 5 6 7 8 9"
    b2c_printf("1 2 3 4 5 6 7 8 9\n");
    // 01600 FOR I=1 TO R
    for(I_int=1;I_int<=R_int;I_int++){
        // 01610 PRINT I;TAB(7);
        b2c_printf(" %d ¹—
ðc¹—
ðc\n",I_int);
        // 01620 FOR J=1 TO C
        for(J_int=1;J_int<=C_int;J_int++){
            // 01630 IF A(I,J)=-1 THEN 1670
            if(A_int_arr[I_int][J_int]==-1)goto Lbl_01670;
            // 01640 IF A(I,J)=0 THEN 1690
            if(A_int_arr[I_int][J_int]==0)goto Lbl_01690;
            // 01650 PRINT "* ";
            b2c_printf("* ");
            // 01660 GOTO 1680
            goto Lbl_01680;

  Lbl_01670:
            // 01670 PRINT "P ";
            b2c_printf("P ");

  Lbl_01680:
            // 01680 NEXT J
            int dummy_1680=0; // Ignore this line.
        }; // End-For(J_int)

  Lbl_01690:
        // 01690 PRINT 
        b2c_printf("");
        // 01700 NEXT I
        int dummy_1700=0; // Ignore this line.
    }; // End-For(I_int)
    // 01710 PRINT 
    b2c_printf("");
    // 01720 IF F=0 THEN 1750
    if(F_int==0)goto Lbl_01750;
    // 01730 GOTO 09900
    goto Lbl_09900;
    // 01740 REM GET CHOMPS FOR EACH PLAYER IN TURN

  Lbl_01750:
    // 01750 LET I1=I1+1
    I1_int = I1_int+1;
    // 01760 LET P1=I1-INT(I1/P)*P
    P1_int = I1_int-INT(I1_int/P_int)*P_int;
    // 01770 IF P1 <> 0 THEN 1790
    if(P1_int!=0)goto Lbl_01790;
    // 01780 P1=P
    P1_int = P_int;

  Lbl_01790:
    // 01790 PRINT "PLAYER";P1
    b2c_printf("Player %d \n",P1_int);
    // 01800 PRINT "COORDINATES OF CHOMP (ROW,COLUMN)";
    b2c_printf("Coordinates of chomp (row,column)");
    // 01810 INPUT R1,C1
    // Start of Basic INPUT statement 01810
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R1_int,args,0)) ||
                (err += b2c_strtoi(&C1_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01810
    // 01820 IF R1<1 THEN 1890
    if(R1_int<1)goto Lbl_01890;
    // 01830 IF R1>R THEN 1890
    if(R1_int>R_int)goto Lbl_01890;
    // 01840 IF C1<1 THEN 1890
    if(C1_int<1)goto Lbl_01890;
    // 01850 IF C1>C THEN 1890
    if(C1_int>C_int)goto Lbl_01890;
    // 01860 IF A(R1,C1)=0 THEN 1890
    if(A_int_arr[R1_int][C1_int]==0)goto Lbl_01890;
    // 01870 IF A(R1,C1)=-1 THEN 1980
    if(A_int_arr[R1_int][C1_int]==-1)goto Lbl_01980;
    // 01880 GOTO 1910
    goto Lbl_01910;

  Lbl_01890:
    // 01890 PRINT "NO FAIR. YOU'RE TRYING TO CHOMP ON EMPTY SPACE!"
    b2c_printf("No fair. You're trying to chomp on empty space!\n");
    // 01900 GOTO 1790
    goto Lbl_01790;

  Lbl_01910:
    // 01910 FOR I=R1 TO R
    for(I_int=R1_int;I_int<=R_int;I_int++){
        // 01920 FOR J=C1 TO C
        for(J_int=C1_int;J_int<=C_int;J_int++){
            // 01930 A(I,J)=0
            A_int_arr[I_int][J_int] = 0;
            // 01940 NEXT J
            int dummy_1940=0; // Ignore this line.
        }; // End-For(J_int)
        // 01950 NEXT I
        int dummy_1950=0; // Ignore this line.
    }; // End-For(I_int)
    // 01960 GOTO 1580
    goto Lbl_01580;
    // 01970 REM END OF GAME DETECTED IN LINE 900

  Lbl_01980:
    // 01980 PRINT "YOU LOSE, PLAYER";P1
    b2c_printf("You lose, player %d \n",P1_int);
    // 01990 PRINT 
    b2c_printf("");
    // 02000 PRINT "AGAIN (1=YES, 0=NO!)";
    b2c_printf("Again (1=yes, 0=no!)");
    // 02010 INPUT R$
    // Start of Basic INPUT statement 02010
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&R_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02010
    // 02020 IF R=1 THEN 1280
    if(R_int==1)goto Lbl_01280;
    // 02030 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
