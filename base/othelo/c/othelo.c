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
char* data_01600s[]={"0","-1","-1","-1","0","1","1","1"};
char* data_01640s[]={"1","1","0","-1","-1","-1","0","1"};
char* data_01680s[]={"A","B","C","D","E","F","G","H"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1600,  8,data_01600s},
    { 1640,  8,data_01640s},
    { 1680,  8,data_01680s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
int    A_int_arr[9][9];                           // Basic: A 
int    B_int;                                     // Basic: B 
int    B1_int;                                    // Basic: B1 
int    C_int;                                     // Basic: C 
char*  C_str_arr[8];                              // Basic: C$ 
int    C1_int;                                    // Basic: C1 
char*  D_str_arr[2];                              // Basic: D$ 
int    F1_int;                                    // Basic: F1 
int    F2_int;                                    // Basic: F2 
int    F9_int;                                    // Basic: F9 
int    H_int;                                     // Basic: H 
int    H1_int;                                    // Basic: H1 
int    I_int;                                     // Basic: I 
int    I1_int;                                    // Basic: I1 
int    I3_int;                                    // Basic: I3 
int    I4_int_arr[8];                             // Basic: I4 
int    I5_int;                                    // Basic: I5 
int    I6_int;                                    // Basic: I6 
int    I9_int;                                    // Basic: I9 
int    J_int;                                     // Basic: J 
int    J1_int;                                    // Basic: J1 
int    J3_int;                                    // Basic: J3 
int    J4_int_arr[8];                             // Basic: J4 
int    J5_int;                                    // Basic: J5 
int    J6_int;                                    // Basic: J6 
int    K_int;                                     // Basic: K 
int    K1_int;                                    // Basic: K1 
int    L_int;                                     // Basic: L 
int    N1_int;                                    // Basic: N1 
int    R_int;                                     // Basic: R 
int    S1_int;                                    // Basic: S1 
int    S2_int;                                    // Basic: S2 
int    S3_int;                                    // Basic: S3 
int    T1_int;                                    // Basic: T1 
int    T2_int;                                    // Basic: T2 
int    U_int;                                     // Basic: U 
int    W_int;                                     // Basic: W 
char*  X_str;                                     // Basic: X$ 
int    Z_int;                                     // Basic: Z 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_03860();
void Routine_04060();
void Routine_04350();
void Routine_04540();
void Routine_04630();

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
    // 03810 REM********		
    // 03820 REM********		SUBROUTINE: TEST FOR PROPER NEIGHBOUR
    // 03830 REM********		ASSUMES:
    // 03840 REM********		I,J LOCATES A BLANK SQUARE
    // 03850 REM********		YOU HOPE TO SEE AN ADJACENT  T2 (= -T1)

void Routine_03860(){
    // 03860 FOR I1 =  -1 TO 1
    for(I1_int=-1;I1_int<=1;I1_int++){
        // 03870     FOR J1 = -1 TO 1
        for(J1_int=-1;J1_int<=1;J1_int++){
            // 03880 	IF  A(I+I1,J+J1) = T2 THEN 3940
            if(A_int_arr[I_int+I1_int][J_int+J1_int]==T2_int)goto Lbl_03940;
            // 03890     NEXT J1
            int dummy_3890=0; // Ignore this line.
        }; // End-For(J1_int)
        // 03900 NEXT I1
        int dummy_3900=0; // Ignore this line.
    }; // End-For(I1_int)
    // 03910 REM********		NO T2 FOUND
    // 03920 F1 = 0
    F1_int = 0;
    // 03930 GOTO 03960
    goto Lbl_03960;

  Lbl_03940:
    // 03940 F1 = 1
    F1_int = 1;
    // 03950 GOTO 03960
    goto Lbl_03960;

  Lbl_03960:
    // 03960 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine C
//---------------------------------------------------------------------------
    // 03970 REM********		SUBROUTINE SCORE AND UPDATE
    // 03980 REM********		ASSUMES;
    // 03990 REM********		(I,J) IS A TENTATIVE PLACE FOR A PIECE T1.
    // 04000 REM********		WANT RUNS OF T2 = -T1, TERMINATED BY A T1.
    // 04010 REM********		IF U IS TRUE (1), MARK THOSE RUNS AS T1'S.
    // 04020 REM********		RETURN SUM OF ALL RUNS (T2'S ONLY) IN S1.
    // 04030 REM********		MAIN PROGRAM CONTAINS THE FOLLOWING ARRAYS:
    // 04040 REM********		I4:  0 -1 -1 -1  0  1  1  1
    // 04050 REM********		J4:  1  1  0 -1 -1 -1  0  1

void Routine_04060(){
    // 04060 S1 = 0
    S1_int = 0;
    // 04070 FOR K = 1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 04080     I5 = I4(K)
        I5_int = I4_int_arr[K_int];
        // 04090     J5 = J4(K)
        J5_int = J4_int_arr[K_int];
        // 04100     I6 = I + I5
        I6_int = I_int+I5_int;
        // 04110     J6 = J + J5
        J6_int = J_int+J5_int;
        // 04120     S3 = 0
        S3_int = 0;
        // 04130     IF A(I6,J6) <> T2 THEN 4310
        if(A_int_arr[I6_int][J6_int]!=T2_int)goto Lbl_04310;
        // 04140     REM			LOOP THROUGH THE RUN

  Lbl_04150:
        // 04150     S3 = S3 + 1
        S3_int = S3_int+1;
        // 04160     I6 = I6 + I5
        I6_int = I6_int+I5_int;
        // 04170     J6 = J6 + J5
        J6_int = J6_int+J5_int;
        // 04180     IF A (I6,J6) = T1 THEN 4210
        if(A_int_arr[I6_int][J6_int]==T1_int)goto Lbl_04210;
        // 04190     IF A(I6,J6) = 0 THEN 4310
        if(A_int_arr[I6_int][J6_int]==0)goto Lbl_04310;
        // 04200     GO TO 4150
        goto Lbl_04150;

  Lbl_04210:
        // 04210     S1 = S1 + S3
        S1_int = S1_int+S3_int;
        // 04220     IF U <> 1 THEN 4310
        if(U_int!=1)goto Lbl_04310;
        // 04230     REM			UPDATE BOARD
        // 04240     I6 = I
        I6_int = I_int;
        // 04250     J6 = J
        J6_int = J_int;
        // 04260     FOR K1 = 0 TO S3
        for(K1_int=0;K1_int<=S3_int;K1_int++){
            // 04270 	A(I6,J6) = T1
            A_int_arr[I6_int][J6_int] = T1_int;
            // 04280 	I6 = I6 + I5
            I6_int = I6_int+I5_int;
            // 04290 	J6 = J6 + J5
            J6_int = J6_int+J5_int;
            // 04300     NEXT K1
            int dummy_4300=0; // Ignore this line.
        }; // End-For(K1_int)

  Lbl_04310:
        // 04310 NEXT K
        int dummy_4310=0; // Ignore this line.
    }; // End-For(K_int)
    // 04320 GOTO 04330
    goto Lbl_04330;

  Lbl_04330:
    // 04330 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine D
//---------------------------------------------------------------------------
    // 04340 REM********		SUBROUTINE TO PRINT BOARD

void Routine_04350(){
    // 04350 PRINT CHR$(30)
    b2c_printf("");
    // 04360 LET L = 18
    L_int = 18;
    // 04370 IF F9 = 1 GO TO 4400
    if(F9_int==1)goto Lbl_04400;
    // 04380 GOSUB 4630
    Routine_04630();
    // 04390 LET F9 = 1
    F9_int = 1;

  Lbl_04400:
    // 04400 PRINT CHR$(30)
    b2c_printf("");
    // 04410 PRINT "    A B C D E F G H"
    b2c_printf("    a b c d e f g h\n");
    // 04420 FOR I = 1 TO 8
    for(I_int=1;I_int<=8;I_int++){
        // 04430     PRINT I;
        b2c_printf(" %d D[·èb\n",I_int);
        // 04440     FOR J = 1 TO 8
        for(J_int=1;J_int<=8;J_int++){
            // 04450 	PRINT " ";
            b2c_printf(" ");
            // 04460 	PRINT D$(A(I,J)+1);
            b2c_printf("%s{[·èb\n",D_str_arr[A_int_arr[I_int][J_int]+1]);
            // 04470     NEXT J
            int dummy_4470=0; // Ignore this line.
        }; // End-For(J_int)
        // 04480     PRINT
        b2c_printf("");
        // 04490 NEXT I
        int dummy_4490=0; // Ignore this line.
    }; // End-For(I_int)
    // 04500 PRINT
    b2c_printf("");
    // 04510 GOTO 04520
    goto Lbl_04520;

  Lbl_04520:
    // 04520 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine E
//---------------------------------------------------------------------------
    // 04530 REM********		***	SPACE		***

void Routine_04540(){
    // 04540 PRINT CHR$(30)
    b2c_printf("");
    // 04550 FOR I9 = 1 TO L
    for(I9_int=1;I9_int<=L_int;I9_int++){
        // 04560     PRINT
        b2c_printf("");
        // 04570 NEXT I9
        int dummy_4570=0; // Ignore this line.
    }; // End-For(I9_int)
    // 04580 IF L <> 18 GO TO 4600
    if(L_int!=18)goto Lbl_04600;
    // 04590 F9 = 0
    F9_int = 0;

  Lbl_04600:
    // 04600 GOTO 04610
    goto Lbl_04610;

  Lbl_04610:
    // 04610 RETURN
    return;
};


//---------------------------------------------------------------------------
// Routine F
//---------------------------------------------------------------------------
    // 04620 REM********		***	BLANK OUT	***

void Routine_04630(){
    // 04630 GOSUB 4540
    Routine_04540();
    // 04640 PRINT TAB(60);" "
    b2c_printf(" \n");
    // 04650 PRINT TAB(60);" "
    b2c_printf(" \n");
    // 04660 GOTO 04670
    goto Lbl_04670;

  Lbl_04670:
    // 04670 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM********		OTHELLO          BYTE VOL. 2, NUMBER 10 (OCT. 1977)
    // 01010 REM********		PLAYS THE GAME OTHELLO WITH TWO STRATEGIES
    // 01020 REM********		1. TAKE THE MAX. NUMBER OF PIECES
    // 01030 REM********		2. ADD A BONUS FOR OUTSIDE POSITION
    // 01040 REM********		BOARD IS THE ARRAY A, BOUNDED BY 0'S (BLANKS)
    // 01050 REM********		A = 0 FOR EMPTY SQUARE
    // 01060 REM********		A = B FOR BLACK SQUARE
    // 01070 REM********		A = W FOR WHITE SQUARE
    // 01080 REM********		I AND J ARE ALWAYS USED FOR ROW/COLUMN INDICES
    // 01090 REM********		I1 AND J4 STORE INCREMENTS TO THE 8 NEIGHBOURS
    // 01100 REM********		C$ AND D$ STORE CHARACTERS A-H,X,...,O FOR OUTPUT
    // 01110 DIM A(9,9),I4(8),J4(8),C$(8),D$(2)
    // 01120 REM********		
    // 01130 PRINT "GREETINGS FROM OTHELLO!"
    b2c_printf("Greetings from othello!\n");
    // 01140 PRINT "DO YOU WANT INSTRUCTIONS (Y OR N)";
    b2c_printf("Do you want instructions (y or n)");

  Lbl_01150:
    // 01150 INPUT X$
    // Start of Basic INPUT statement 01150
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01150
    // 01160 IF X$ = "N" THEN 1380
    if(strcmp(X_str,"N")==0)goto Lbl_01380;
    // 01170 IF X$ <> "Y" THEN 1150
    if(strcmp(X_str,"Y")!=0)goto Lbl_01150;
    // 01180 PRINT
    b2c_printf("");
    // 01190 PRINT "OTHELLO IS PLAYED ON AN 8X8 CHECKER BOARD"
    b2c_printf("Othello is played on an 8x8 checker board\n");
    // 01200 PRINT "ROWS ARE NUMBERED FROM 1 TO 8 AND COLUMNS FROM A TO H"
    b2c_printf("Rows are numbered from 1 to 8 and columns from a to h\n");
    // 01210 PRINT" THE INITIAL CONFIGURATION IS ALL BLANK EXCEPT FOR"
    b2c_printf(" the initial configuration is all blank except for\n");
    // 01220 PRINT "THE CENTER FOUR SQUARES, WHICH FORM THE PATTERN:"
    b2c_printf("The center four squares, which form the pattern:\n");
    // 01230 PRINT "               O X"
    b2c_printf("               o x\n");
    // 01240 PRINT "               X O"
    b2c_printf("               x o\n");
    // 01250 PRINT
    b2c_printf("");
    // 01260 PRINT "TRY TO PLACE YOUR PIECE SO THAT IT WILL 'OUTFLANK' MINE"
    b2c_printf("Try to place your piece so that it will 'outflank' mine\n");
    // 01270 PRINT "THEREBY CREATING A HORIZONTAL, VERTICAL, OR DIAGONAL "
    b2c_printf("Thereby creating a horizontal, vertical, or diagonal \n");
    // 01280 PRINT "RUN OF MY PIECES BOUNDED AT EACH END BY AT LEAST ONE "
    b2c_printf("Run of my pieces bounded at each end by at least one \n");
    // 01290 PRINT "OF YOURS.  THIS WILL 'FLIP' MY PIECES, TURNING THEM INTO"
    b2c_printf("Of yours.  This will 'flip' my pieces, turning them into\n");
    // 01300 PRINT "YOURS."
    b2c_printf("Yours.\n");
    // 01310 PRINT"     NOTE: YOU MUST CAPTURE AT LEAST ONE OF MY PIECES"
    b2c_printf("     note: you must capture at least one of my pieces\n");
    // 01320 PRINT "IN THIS WAY IF IT IS AT ALL POSSIBLE.  IF IT IS NOT"
    b2c_printf("In this way if it is at all possible.  If it is not\n");
    // 01330 PRINT "POSSIBLE, YOU FORFEIT YOUR TURN BY ENTERING"
    b2c_printf("Possible, you forfeit your turn by entering\n");
    // 01340 PRINT "     0,0   FOR YOUR ROW,COLUMN MOVE"
    b2c_printf("     0,0   for your row,column move\n");
    // 01350 PRINT " GOOD LUCK!"
    b2c_printf(" good luck!\n");
    // 01360 PRINT
    b2c_printf("");
    // 01370 REM********		

  Lbl_01380:
    // 01380 PRINT "SHOULD I WAIT BEFORE MAKING MY MOVES (Y OR N)";
    b2c_printf("Should i wait before making my moves (y or n)");
    // 01390 F2 = 0
    F2_int = 0;
    // 01400 F9 = 1
    F9_int = 1;

  Lbl_01410:
    // 01410 INPUT X$
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
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01410
    // 01420 IF X$ = "N" THEN 1460
    if(strcmp(X_str,"N")==0)goto Lbl_01460;
    // 01430 IF X$ <> "Y" THEN  1410
    if(strcmp(X_str,"Y")!=0)goto Lbl_01410;
    // 01440 F2 = 1
    F2_int = 1;
    // 01450         PRINT "OK.  TYPING ANY CHARACTER WILL LET ME GO"
    b2c_printf("Ok.  Typing any character will let me go\n");

  Lbl_01460:
    // 01460 PRINT "SHOULD I PLAY MY BEST STRATEGY (Y OR N)";
    b2c_printf("Should i play my best strategy (y or n)");
    // 01470 S2 = 0
    S2_int = 0;

  Lbl_01480:
    // 01480 INPUT X$
    // Start of Basic INPUT statement 01480
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01480
    // 01490 IF X$ = "N" THEN 1520
    if(strcmp(X_str,"N")==0)goto Lbl_01520;
    // 01500 IF X$ <> "Y" THEN 1480
    if(strcmp(X_str,"Y")!=0)goto Lbl_01480;
    // 01510 S2 = 2
    S2_int = 2;

  Lbl_01520:
    // 01520 B = -1
    B_int = -1;
    // 01530 W = +1
    W_int = 1;
    // 01540 D$(B +1) ="X"
    GLBpStr="X";
    D_str_arr[B_int+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01550 D$(0 +1) = "."
    GLBpStr=".";
    D_str_arr[0+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01560 D$(W + 1) ="O"
    GLBpStr="O";
    D_str_arr[W_int+1] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01570 FOR K = 1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 01580     READ I4(K)
        I4_int_arr[K_int] = Get_Data_Int();
        // 01590 NEXT K
        int dummy_1590=0; // Ignore this line.
    }; // End-For(K_int)
    // 01600 DATA 0,-1,-1,-1,0,1,1,1
    // 01610 FOR K=1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 01620     READ J4(K)
        J4_int_arr[K_int] = Get_Data_Int();
        // 01630 NEXT K
        int dummy_1630=0; // Ignore this line.
    }; // End-For(K_int)
    // 01640 DATA 1,1,0,-1,-1,-1,0,1
    // 01650 FOR K = 1 TO 8
    for(K_int=1;K_int<=8;K_int++){
        // 01660     READ C$(K)
        C_str_arr[K_int] = Get_Data_String();
        // 01670 NEXT K
        int dummy_1670=0; // Ignore this line.
    }; // End-For(K_int)
    // 01680 DATA A,B,C,D,E,F,G,H
    // 01690 REM********		SET UP A NEW GAME

  Lbl_01700:
    // 01700 FOR I = 0 TO 9
    for(I_int=0;I_int<=9;I_int++){
        // 01710     FOR J = 0 TO 9
        for(J_int=0;J_int<=9;J_int++){
            // 01720 	A(I,J)=0
            A_int_arr[I_int][J_int] = 0;
            // 01730     NEXT J
            int dummy_1730=0; // Ignore this line.
        }; // End-For(J_int)
        // 01740 NEXT I
        int dummy_1740=0; // Ignore this line.
    }; // End-For(I_int)
    // 01750 A(4,4) = W
    A_int_arr[4][4] = W_int;
    // 01760 A(5,5) = W
    A_int_arr[5][5] = W_int;
    // 01770 A(4,5) = B
    A_int_arr[4][5] = B_int;
    // 01780 A(5,4) = B
    A_int_arr[5][4] = B_int;
    // 01790 C1 = 2
    C1_int = 2;
    // 01800 H1 = 2
    H1_int = 2;
    // 01810 N1 = 4
    N1_int = 4;
    // 01820 Z =0
    Z_int = 0;
    // 01830 REM********		HUMAN'S CHOICES
    // 01840 PRINT "DO YOU WANT TO HAVE X OR O";
    b2c_printf("Do you want to have x or o");
    // 01850 C = W
    C_int = W_int;
    // 01860 H = B
    H_int = B_int;

  Lbl_01870:
    // 01870 INPUT X$
    // Start of Basic INPUT statement 01870
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01870
    // 01880 IF X$ = "X" THEN 1920
    if(strcmp(X_str,"X")==0)goto Lbl_01920;
    // 01890 IF X$ <> "O" THEN 1870
    if(strcmp(X_str,"O")!=0)goto Lbl_01870;
    // 01900 C = B
    C_int = B_int;
    // 01910 H = W
    H_int = W_int;

  Lbl_01920:
    // 01920 PRINT "DO YOU WANT TO GO FIRST (Y OR N)";
    b2c_printf("Do you want to go first (y or n)");

  Lbl_01930:
    // 01930 INPUT X$
    // Start of Basic INPUT statement 01930
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01930
    // 01940 PRINT CHR$(26)
    b2c_printf("");
    // 01950 IF X$ = "N" THEN 2030
    if(strcmp(X_str,"N")==0)goto Lbl_02030;
    // 01960 IF X$ <> "Y" THEN 1930
    if(strcmp(X_str,"Y")!=0)goto Lbl_01930;
    // 01970 REM********		PRINT INITIAL BOARD
    // 01980 GOSUB 4350
    Routine_04350();
    // 01990 GO TO 2760
    goto Lbl_02760;
    // 02000 REM********		COMPUTER'S MOVE

  Lbl_02010:
    // 02010 IF F2 = 0 THEN 2030
    if(F2_int==0)goto Lbl_02030;
    // 02020 INPUT X$
    // Start of Basic INPUT statement 02020
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02020

  Lbl_02030:
    // 02030 B1 = -1
    B1_int = -1;
    // 02040 I3 = J3 = 0
    J3_int = I3_int = 0;
    // 02050 T1 = C
    T1_int = C_int;
    // 02060 T2 = H
    T2_int = H_int;
    // 02070 REM********		SCAN FOR BLANK SQUARE
    // 02080 FOR I = 1 TO 8
    for(I_int=1;I_int<=8;I_int++){
        // 02090     FOR J = 1 TO 8
        for(J_int=1;J_int<=8;J_int++){
            // 02100 	IF A(I,J) <> 0 THEN 2390
            if(A_int_arr[I_int][J_int]!=0)goto Lbl_02390;
            // 02110 	REM********		FOUND A BLANK SQUARE
            // 02120 	REM********		DOES IT HAVE AN OPPONENT AS A NEIGHBOUR
            // 02130 	GOSUB 3860
            Routine_03860();
            // 02140 	IF F1 = 0 THEN 2390
            if(F1_int==0)goto Lbl_02390;
            // 02150 	REM********		FOUND OPPONENT AS NEIGHBOUR
            // 02160 	REM********		HOW MANY OF HIS PIECES CAN WE FLIP?
            // 02170 	REM********		DON'T DO IT NOW
            // 02180 	U = -1
            U_int = -1;
            // 02190 	GOSUB 4060
            Routine_04060();
            // 02200 	REM********		EXTRA POINTS FOR BOUNDARY POSITION
            // 02210 	IF S1 = 0 THEN 2390
            if(S1_int==0)goto Lbl_02390;
            // 02220 	IF (I-1) * (I-8) <> 0 THEN 2240
            if((I_int-1)*(I_int-8)!=0)goto Lbl_02240;
            // 02230 	S1 = S1 + S2
            S1_int = S1_int+S2_int;

  Lbl_02240:
            // 02240 	IF (J-1) * (J-8) <> 0 THEN 2270
            if((J_int-1)*(J_int-8)!=0)goto Lbl_02270;
            // 02250 	S1 = S1 +S2
            S1_int = S1_int+S2_int;
            // 02260 	REM********		IS THIS BETTER THAN THE BEST FOUND SO FAR

  Lbl_02270:
            // 02270 	IF S1 < B1 THEN 2390
            if(S1_int<B1_int)goto Lbl_02390;
            // 02280 	IF S1 > B1 THEN 2350
            if(S1_int>B1_int)goto Lbl_02350;
            // 02290 	REM********		A TIE; RANDOM DECISION
            // 02300 	REM********		THE NEXT TWO EXECUTABLE STATEMENTS ARE FOR
            // 02310 	REM********		BASIC WITH RANDOM NUMBERS
            // 02320 	R = RND(1)
            R_int = RND(1);
            // 02330 	IF R > .5 THEN 2390
            if(R_int>0.5)goto Lbl_02390;
            // 02340 	REM********		YES

  Lbl_02350:
            // 02350 	B1 = S1
            B1_int = S1_int;
            // 02360 	I3 = I
            I3_int = I_int;
            // 02370 	J3 = J
            J3_int = J_int;
            // 02380 	REM********		END OF SCAN LOOP

  Lbl_02390:
            // 02390     NEXT J
            int dummy_2390=0; // Ignore this line.
        }; // End-For(J_int)
        // 02400 NEXT I
        int dummy_2400=0; // Ignore this line.
    }; // End-For(I_int)
    // 02410 REM********		COULD WE DO ANYTHING?
    // 02420 IF B1 > 0 THEN 2510
    if(B1_int>0)goto Lbl_02510;
    // 02430 REM********		NO
    // 02440 LET L = 18
    L_int = 18;
    // 02450 GOSUB 4540
    Routine_04540();
    // 02460 PRINT "DAMN! HAVE TO FORFEIT MY MOVE!"
    b2c_printf("Damn! Have to forfeit my move!\n");
    // 02470 IF Z = 1 THEN 3370
    if(Z_int==1)goto Lbl_03370;
    // 02480 Z = 1
    Z_int = 1;
    // 02490 GO TO 2760
    goto Lbl_02760;
    // 02500 REM********		MAKE THE MOVE

  Lbl_02510:
    // 02510 Z = 0
    Z_int = 0;
    // 02520 LET L=15
    L_int = 15;
    // 02530 GOSUB 4540
    Routine_04540();
    // 02540 PRINT "I WILL MOVE TO ";
    b2c_printf("I will move to ");
    // 02550 PRINT I3;
    b2c_printf(" %d Ÿ[·èb\n",I3_int);
    // 02560 PRINT " , ";
    b2c_printf(" , ");
    // 02570 PRINT C$(J3)
    b2c_printf("%s\n",C_str_arr[J3_int]);
    // 02580 I= I3
    I_int = I3_int;
    // 02590 J= J3
    J_int = J3_int;
    // 02600 U= 1
    U_int = 1;
    // 02610 GOSUB 4060
    Routine_04060();
    // 02620 C1 = C1 + S1 + 1
    C1_int = C1_int+S1_int+1;
    // 02630 H1 = H1 - S1
    H1_int = H1_int-S1_int;
    // 02640 N1 = N1 + 1
    N1_int = N1_int+1;
    // 02650 LET L=16
    L_int = 16;
    // 02660 GOSUB 4540
    Routine_04540();
    // 02670 PRINT " THAT GIVES ME : ";
    b2c_printf(" that gives me : ");
    // 02680 PRINT S1;
    b2c_printf(" %d £[·èb\n",S1_int);
    // 02690 PRINT " OF YOUR PIECES"
    b2c_printf(" of your pieces\n");
    // 02700 REM********		PRINT OUT BOARD
    // 02710 GOSUB 4350
    Routine_04350();
    // 02720 REM********		TEST FOR END OF GAME
    // 02730 IF H1 = 0 THEN 3370
    if(H1_int==0)goto Lbl_03370;
    // 02740 IF N1 = 64 THEN 3370
    if(N1_int==64)goto Lbl_03370;
    // 02750 REM********		HUMANS MOVE

  Lbl_02760:
    // 02760 T1 = H
    T1_int = H_int;
    // 02770 T2 = C
    T2_int = C_int;
    // 02780 LET L = 12
    L_int = 12;
    // 02790 GOSUB 4540
    Routine_04540();

  Lbl_02800:
    // 02800 PRINT " YOUR MOVE";
    b2c_printf(" your move");

  Lbl_02810:
    // 02810 INPUT I, X$
    // Start of Basic INPUT statement 02810
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&I_int,args,0)) ||
                (err += b2c_strtos(&X_str,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02810
    // 02820 IF I < 0 THEN 2810
    if(I_int<0)goto Lbl_02810;
    // 02830 IF I > 8 THEN 2810
    if(I_int>8)goto Lbl_02810;
    // 02840 IF I <> 0 THEN 2930
    if(I_int!=0)goto Lbl_02930;
    // 02850 LET L = 18
    L_int = 18;
    // 02860 GOSUB 4540
    Routine_04540();
    // 02870 PRINT "ARE YOU FORFEITING YOUR TURN Y OR N"
    b2c_printf("Are you forfeiting your turn y or n\n");
    // 02880 INPUT X$
    // Start of Basic INPUT statement 02880
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02880
    // 02890 IF X$ <> "Y" THEN 2800
    if(strcmp(X_str,"Y")!=0)goto Lbl_02800;
    // 02900 IF Z = 1 THEN 3370
    if(Z_int==1)goto Lbl_03370;
    // 02910 Z = 1
    Z_int = 1;
    // 02920 GO TO 2010
    goto Lbl_02010;

  Lbl_02930:
    // 02930 FOR J = 1 TO 8
    for(J_int=1;J_int<=8;J_int++){
        // 02940     IF C$(J) =X$ THEN 2980
        if(strcmp(C_str_arr[J_int],X_str)==0)goto Lbl_02980;
        // 02950 NEXT J
        int dummy_2950=0; // Ignore this line.
    }; // End-For(J_int)
    // 02960 GO TO 2810
    goto Lbl_02810;
    // 02970 REM********		CHECK FOR BLANK

  Lbl_02980:
    // 02980 IF A(I,J) = 0 THEN 3040
    if(A_int_arr[I_int][J_int]==0)goto Lbl_03040;
    // 02990 LET L = 18
    L_int = 18;
    // 03000 GOSUB 4540
    Routine_04540();
    // 03010 PRINT "SORRY, THAT SQUARE IS OCCUPIED, TRY AGAIN"
    b2c_printf("Sorry, that square is occupied, try again\n");
    // 03020 GO TO 2810
    goto Lbl_02810;
    // 03030 REM********		CHECK FOR LEGAL NEIGHBOUR

  Lbl_03040:
    // 03040 GOSUB 3860
    Routine_03860();
    // 03050 IF F1 = 1 THEN 3110
    if(F1_int==1)goto Lbl_03110;
    // 03060 LET L = 18
    L_int = 18;
    // 03070 GOSUB 4540
    Routine_04540();
    // 03080 PRINT "SORRY, YOU ARE NOT NEXT TO ONE OF MY PIECES. TRY AGAIN.";
    b2c_printf("Sorry, you are not next to one of my pieces. Try again.");
    // 03090 GO TO 2810
    goto Lbl_02810;
    // 03100 REM********		CHECK IF LEGAL RUN

  Lbl_03110:
    // 03110 U = -1
    U_int = -1;
    // 03120 GOSUB 4060
    Routine_04060();
    // 03130 IF S1 > 0 THEN 3190
    if(S1_int>0)goto Lbl_03190;
    // 03140 LET L = 18
    L_int = 18;
    // 03150 GOSUB 4540
    Routine_04540();
    // 03160 PRINT "SORRY, THAT DOESN'T FLANK A ROW, TRY AGAIN"
    b2c_printf("Sorry, that doesn't flank a row, try again\n");
    // 03170 GO TO 2810
    goto Lbl_02810;
    // 03180 REM********		EVERYTHING LEGAL; MAKE HUMANS MOVE

  Lbl_03190:
    // 03190 Z = 0
    Z_int = 0;
    // 03200 LET L = 13
    L_int = 13;
    // 03210 GOSUB 4540
    Routine_04540();
    // 03220 PRINT "THAT GIVES YOU";
    b2c_printf("That gives you");
    // 03230 PRINT S1;
    b2c_printf(" %d ±[·èb\n",S1_int);
    // 03240 PRINT " OF MY PIECES"
    b2c_printf(" of my pieces\n");
    // 03250 U = 1
    U_int = 1;
    // 03260 GOSUB 4060
    Routine_04060();
    // 03270 H1 = H1 + S1 + 1
    H1_int = H1_int+S1_int+1;
    // 03280 C1 = C1 -S1
    C1_int = C1_int-S1_int;
    // 03290 N1 = N1 + 1
    N1_int = N1_int+1;
    // 03300 REM********		PRINT OUT BOARD
    // 03310 GOSUB 4350
    Routine_04350();
    // 03320 REM********		TEST FOR END OF GAME
    // 03330 IF C1 = 0 THEN 3370
    if(C1_int==0)goto Lbl_03370;
    // 03340 IF N1 = 64 THEN 3370
    if(N1_int==64)goto Lbl_03370;
    // 03350 GO TO 2010
    goto Lbl_02010;
    // 03360 REM********		END OF GAME ; WRAPUP

  Lbl_03370:
    // 03370 LET L = 18
    L_int = 18;
    // 03380 GOSUB 4540
    Routine_04540();
    // 03390 PRINT "FOR RESULTS ON GAME TYPE RETURN!!"
    b2c_printf("For results on game type return!!\n");
    // 03400 INPUT X$
    // Start of Basic INPUT statement 03400
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03400
    // 03410 PRINT CHR$(30),CHR$(26)
    b2c_printf("");
    // 03420 PRINT "YOU HAVE ";
    b2c_printf("You have ");
    // 03430 PRINT H1;
    b2c_printf(" %d Ñ[·èb\n",H1_int);
    // 03440 PRINT " PIECES, AND I HAVE ";
    b2c_printf(" pieces, and i have ");
    // 03450 PRINT C1;
    b2c_printf(" %d Ò[·èb\n",C1_int);
    // 03460 PRINT " PIECES--- "
    b2c_printf(" pieces--- \n");
    // 03470 IF H1 = C1 THEN 3510
    if(H1_int==C1_int)goto Lbl_03510;
    // 03480 IF H1 > C1 THEN 3530
    if(H1_int>C1_int)goto Lbl_03530;
    // 03490 PRINT "SORRY, I WON THAT ONE."
    b2c_printf("Sorry, i won that one.\n");
    // 03500 GO TO 3540
    goto Lbl_03540;

  Lbl_03510:
    // 03510 PRINT " A TIE!!!!!"
    b2c_printf(" a tie!!!!!\n");
    // 03520 GO TO 3720
    goto Lbl_03720;

  Lbl_03530:
    // 03530 PRINT "YOU WON!!!"
    b2c_printf("You won!!!\n");

  Lbl_03540:
    // 03540 C1 = C1 - H1
    C1_int = C1_int-H1_int;
    // 03550 IF C1 > 0 THEN 3570
    if(C1_int>0)goto Lbl_03570;
    // 03560 C1 = -C1
    C1_int = C1_int;

  Lbl_03570:
    // 03570 C1 = (64 * C1)/ N1
    C1_int = (64*C1_int)/N1_int;
    // 03580 PRINT "THAT WAS A ";
    b2c_printf("That was a ");
    // 03590 IF C1 < 11 THEN 3710
    if(C1_int<11)goto Lbl_03710;
    // 03600 IF C1 < 25 THEN 3690
    if(C1_int<25)goto Lbl_03690;
    // 03610 IF C1 < 39 THEN 3670
    if(C1_int<39)goto Lbl_03670;
    // 03620 IF C1 < 53 THEN 3650
    if(C1_int<53)goto Lbl_03650;
    // 03630 PRINT " A PERFECT GAME!"
    b2c_printf(" a perfect game!\n");
    // 03640 GO TO 3720
    goto Lbl_03720;

  Lbl_03650:
    // 03650 PRINT "WALKAWAY!"
    b2c_printf("Walkaway!\n");
    // 03660 GO TO 3720
    goto Lbl_03720;

  Lbl_03670:
    // 03670 PRINT "FIGHT!"
    b2c_printf("Fight!\n");
    // 03680 GO TO 3720
    goto Lbl_03720;

  Lbl_03690:
    // 03690 PRINT "HOT GAME!"
    b2c_printf("Hot game!\n");
    // 03700 GO TO 3720
    goto Lbl_03720;

  Lbl_03710:
    // 03710 PRINT "SQUEAKER!"
    b2c_printf("Squeaker!\n");

  Lbl_03720:
    // 03720 PRINT
    b2c_printf("");
    // 03730 PRINT"DO YOU WANT TO PLAY AGAIN";
    b2c_printf("Do you want to play again");

  Lbl_03740:
    // 03740 INPUT X$
    // Start of Basic INPUT statement 03740
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&X_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 03740
    // 03750 IF X$ = "Y" THEN 1700
    if(strcmp(X_str,"Y")==0)goto Lbl_01700;
    // 03760 IF X$ <> "N" THEN 3740
    if(strcmp(X_str,"N")!=0)goto Lbl_03740;
    // 03770 PRINT "THANKS FOR PLAYING."
    b2c_printf("Thanks for playing.\n");
    // 03780 STOP
    exit(1);
    // 03790 REM********		SUCCESS
    // 03800 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
