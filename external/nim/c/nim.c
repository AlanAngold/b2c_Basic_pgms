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
int    A_int_arr[100];                            // Basic: A 
int    B_int_arr[100][10];                        // Basic: B 
int    C_int;                                     // Basic: C 
int    D_int_arr[2];                              // Basic: D 
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    N_int;                                     // Basic: N 
char*  Q9_str;                                    // Basic: Q9$ 
int    W_int;                                     // Basic: W 
int    X_int;                                     // Basic: X 
int    Y_int;                                     // Basic: Y 
int    Z_int;                                     // Basic: Z 
char*  Z_str;                                     // Basic: Z$ 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_02490();

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

void Routine_02490(){
    // 02490 LET Z=0
    Z_int = 0;
    // 02500 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 02510 IF A(I)=0 THEN 2530
        if(A_int_arr[I_int]==0)goto Lbl_02530;
        // 02520 GOTO 02560
        goto Lbl_02560;

  Lbl_02530:
        // 02530 NEXT I
        int dummy_2530=0; // Ignore this line.
    }; // End-For(I_int)
    // 02540 LET Z=1
    Z_int = 1;
    // 02550 GOTO 02560
    goto Lbl_02560;

  Lbl_02560:
    // 02560 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"NIM"
    b2c_printf("Nim\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 DIM A(100),B(100,10),D(2)
    // 01040 PRINT "THIS IS THE GAME OF NIM."
    b2c_printf("This is the game of nim.\n");
    // 01050 PRINT "DO YOU WANT INSTRUCTIONS";
    b2c_printf("Do you want instructions");

  Lbl_01060:
    // 01060 INPUT Z$
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
                (err += b2c_strtos(&Z_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF Z$="NO" THEN 1260
    if(strcmp(Z_str,"No")==0)goto Lbl_01260;
    // 01080 IF Z$="no" THEN 1260
    if(strcmp(Z_str,"No")==0)goto Lbl_01260;
    // 01090 IF Z$="YES" THEN 1130
    if(strcmp(Z_str,"Yes")==0)goto Lbl_01130;
    // 01100 IF Z$="yes" THEN 1130
    if(strcmp(Z_str,"Yes")==0)goto Lbl_01130;
    // 01110 PRINT "PLEASE ANSWER YES OR NO"
    b2c_printf("Please answer yes or no\n");
    // 01120 GOTO 1060
    goto Lbl_01060;

  Lbl_01130:
    // 01130 PRINT "THE GAME IS PLAYED WITH A NUMBER OF PILES OF OBJECTS."
    b2c_printf("The game is played with a number of piles of objects.\n");
    // 01140 PRINT "ANY NUMBER OF OBJECTS ARE REMOVED FROM ONE PILE BY YOU AND"
    b2c_printf("Any number of objects are removed from one pile by you and\n");
    // 01150 PRINT "THE MACHINE ALTERNATELY.  ON YOUR TURN, YOU MAY TAKE"
    b2c_printf("The machine alternately.  On your turn, you may take\n");
    // 01160 PRINT "ALL THE OBJECTS THAT REMAIN IN ANY PILE, BUT YOU MUST"
    b2c_printf("All the objects that remain in any pile, but you must\n");
    // 01170 PRINT "TAKE AT LEAST ONE OBJECT, AND YOU MAY TAKE OBJECTS FROM"
    b2c_printf("Take at least one object, and you may take objects from\n");
    // 01180 PRINT "ONLY ONE PILE ON A SINGLE TURN.  YOU MUST SPECIFY WHETHER"
    b2c_printf("Only one pile on a single turn.  You must specify whether\n");
    // 01190 PRINT "WINNING IS DEFINED AS TAKING OR NOT TAKING THE LAST OBJECT,"
    b2c_printf("Winning is defined as taking or not taking the last object,\n");
    // 01200 PRINT "THE NUMBER OF PILES IN THE GAME, AND HOW MANY OBJECTS ARE"
    b2c_printf("The number of piles in the game, and how many objects are\n");
    // 01210 PRINT "ORIGINALLY IN EACH PILE.  EACH PILE MAY CONTAIN A"
    b2c_printf("Originally in each pile.  Each pile may contain a\n");
    // 01220 PRINT "DIFFERENT NUMBER OF OBJECTS."
    b2c_printf("Different number of objects.\n");
    // 01230 PRINT "THE MACHINE WILL SHOW ITS MOVE BY LISTING EACH PILE AND THE"
    b2c_printf("The machine will show its move by listing each pile and the\n");
    // 01240 PRINT "NUMBER OF OBJECTS REMAINING IN THE PILES AFTER  EACH OF ITS"
    b2c_printf("Number of objects remaining in the piles after  each of its\n");
    // 01250 PRINT "MOVES."
    b2c_printf("Moves.\n");

  Lbl_01260:
    // 01260 PRINT
    b2c_printf("");

  Lbl_01270:
    // 01270 PRINT "ENTER WIN OPTION - 1 TO TAKE LAST, 2 TO AVOID LAST";
    b2c_printf("Enter win option - 1 to take last, 2 to avoid last");
    // 01280 INPUT W
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
                (err += b2c_strtoi(&W_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01280
    // 01290 IF W=1 THEN 1310
    if(W_int==1)goto Lbl_01310;
    // 01300 IF W<>2 THEN 1270
    if(W_int!=2)goto Lbl_01270;

  Lbl_01310:
    // 01310 PRINT "ENTER NUMBER OF PILES";
    b2c_printf("Enter number of piles");
    // 01320 INPUT N
    // Start of Basic INPUT statement 01320
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&N_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01320
    // 01330 IF N>100 THEN 1310
    if(N_int>100)goto Lbl_01310;
    // 01340 IF N<1 THEN 1310
    if(N_int<1)goto Lbl_01310;
    // 01350 IF N<>INT(N) THEN 1310
    if(N_int!=INT(N_int))goto Lbl_01310;
    // 01360 PRINT "ENTER PILE SIZES"
    b2c_printf("Enter pile sizes\n");
    // 01370 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){

  Lbl_01380:
        // 01380 PRINT I;
        b2c_printf(" %d ¬lþ\n",I_int);
        // 01390 INPUT A(I)
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
                    (err += b2c_strtoi(&A_int_arr[I_int],args,0)) ){
                     printf("?Redo from start\n");
                }else{
                    break;
                };
            };
        }; // End of Basic INPUT statement 01390
        // 01400 IF A(I)>2000 THEN 1380
        if(A_int_arr[I_int]>2000)goto Lbl_01380;
        // 01410 IF A(I)<1 THEN 1380
        if(A_int_arr[I_int]<1)goto Lbl_01380;
        // 01420 IF A(I)<>INT(A(I)) THEN 1380
        if(A_int_arr[I_int]!=INT(A_int_arr[I_int]))goto Lbl_01380;
        // 01430 NEXT I
        int dummy_1430=0; // Ignore this line.
    }; // End-For(I_int)
    // 01440 PRINT "DO YOU WANT TO MOVE FIRST";
    b2c_printf("Do you want to move first");

  Lbl_01450:
    // 01450 INPUT Q9$
    // Start of Basic INPUT statement 01450
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Q9_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01450
    // 01460 IF Q9$="YES" THEN 2270
    if(strcmp(Q9_str,"Yes")==0)goto Lbl_02270;
    // 01470 IF Q9$="yes" THEN 2270
    if(strcmp(Q9_str,"Yes")==0)goto Lbl_02270;
    // 01480 IF Q9$="NO" THEN 1520
    if(strcmp(Q9_str,"No")==0)goto Lbl_01520;
    // 01490 IF Q9$="no" THEN 1520
    if(strcmp(Q9_str,"No")==0)goto Lbl_01520;
    // 01500 PRINT "PLEASE ANSWER YES OR NO."
    b2c_printf("Please answer yes or no.\n");
    // 01510 GOTO 1450
    goto Lbl_01450;

  Lbl_01520:
    // 01520 IF W=1 THEN 1760
    if(W_int==1)goto Lbl_01760;
    // 01530 LET C=0
    C_int = 0;
    // 01540 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01550 IF A(I)=0 THEN 1590
        if(A_int_arr[I_int]==0)goto Lbl_01590;
        // 01560 LET C=C+1
        C_int = C_int+1;
        // 01570 IF C=3 THEN 1660
        if(C_int==3)goto Lbl_01660;
        // 01580 LET D(C)=I
        D_int_arr[C_int] = I_int;

  Lbl_01590:
        // 01590 NEXT I
        int dummy_1590=0; // Ignore this line.
    }; // End-For(I_int)
    // 01600 IF C=2 THEN 1740
    if(C_int==2)goto Lbl_01740;
    // 01610 IF A(D(1))>1 THEN 1640
    if(A_int_arr[D_int_arr[1]]>1)goto Lbl_01640;

  Lbl_01620:
    // 01620 PRINT "MACHINE LOSES"
    b2c_printf("Machine loses\n");
    // 01630 GOTO 2390
    goto Lbl_02390;

  Lbl_01640:
    // 01640 PRINT "MACHINE WINS"
    b2c_printf("Machine wins\n");
    // 01650 GOTO 2390
    goto Lbl_02390;

  Lbl_01660:
    // 01660 LET C=0
    C_int = 0;
    // 01670 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01680 IF A(I)>1 THEN 1760
        if(A_int_arr[I_int]>1)goto Lbl_01760;
        // 01690 IF A(I)=0 THEN 1710
        if(A_int_arr[I_int]==0)goto Lbl_01710;
        // 01700 LET C=C+1
        C_int = C_int+1;

  Lbl_01710:
        // 01710 NEXT I
        int dummy_1710=0; // Ignore this line.
    }; // End-For(I_int)
    // 01720 IF C/2<>INT(C/2) THEN 1620
    if(C_int/2!=INT(C_int/2))goto Lbl_01620;
    // 01730 GOTO 1760
    goto Lbl_01760;

  Lbl_01740:
    // 01740 IF A(D(1))=1 THEN 1640
    if(A_int_arr[D_int_arr[1]]==1)goto Lbl_01640;
    // 01750 IF A(D(2))=1 THEN 1640
    if(A_int_arr[D_int_arr[2]]==1)goto Lbl_01640;

  Lbl_01760:
    // 01760 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 01770 LET E=A(I)
        E_int = A_int_arr[I_int];
        // 01780 FOR J=0 TO 10
        for(J_int=0;J_int<=10;J_int++){
            // 01790 LET F=E/2
            F_int = E_int/2;
            // 01800 LET B(I,J)=2*(F-INT(F))
            B_int_arr[I_int][J_int] = 2*(F_int-INT(F_int));
            // 01810 LET E=INT(F)
            E_int = INT(F_int);
            // 01820 NEXT J
            int dummy_1820=0; // Ignore this line.
        }; // End-For(J_int)
        // 01830 NEXT I
        int dummy_1830=0; // Ignore this line.
    }; // End-For(I_int)
    // 01840 FOR J=10 TO 0 STEP -1
    for(J_int=10;J_int>=0;J_int+=-1){
        // 01850 LET C=0
        C_int = 0;
        // 01860 LET H=0
        H_int = 0;
        // 01870 FOR I=1 TO N
        for(I_int=1;I_int<=N_int;I_int++){
            // 01880 IF B(I,J)=0 THEN 1930
            if(B_int_arr[I_int][J_int]==0)goto Lbl_01930;
            // 01890 LET C=C+1
            C_int = C_int+1;
            // 01900 IF A(I)<=H THEN 1930
            if(A_int_arr[I_int]<=H_int)goto Lbl_01930;
            // 01910 LET H=A(I)
            H_int = A_int_arr[I_int];
            // 01920 LET G=I
            G_int = I_int;

  Lbl_01930:
            // 01930 NEXT I
            int dummy_1930=0; // Ignore this line.
        }; // End-For(I_int)
        // 01940 IF C/2<>INT(C/2) THEN 2010
        if(C_int/2!=INT(C_int/2))goto Lbl_02010;
        // 01950 NEXT J
        int dummy_1950=0; // Ignore this line.
    }; // End-For(J_int)

  Lbl_01960:
    // 01960 LET E=INT(N*RND(1)+1)
    E_int = INT(N_int*RND(1)+1);
    // 01970 IF A(E)=0 THEN 1960
    if(A_int_arr[E_int]==0)goto Lbl_01960;
    // 01980 LET F=INT(A(E)*RND(1)+1)
    F_int = INT(A_int_arr[E_int]*RND(1)+1);
    // 01990 LET A(E)=A(E)-F
    A_int_arr[E_int] = A_int_arr[E_int]-F_int;
    // 02000 GOTO 2200
    goto Lbl_02200;

  Lbl_02010:
    // 02010 LET A(G)=0
    A_int_arr[G_int] = 0;
    // 02020 FOR J=0 TO 10
    for(J_int=0;J_int<=10;J_int++){
        // 02030 LET B(G,J)=0
        B_int_arr[G_int][J_int] = 0;
        // 02040 LET C=0
        C_int = 0;
        // 02050 FOR I=1 TO N
        for(I_int=1;I_int<=N_int;I_int++){
            // 02060 IF B(I,J)=0 THEN 2080
            if(B_int_arr[I_int][J_int]==0)goto Lbl_02080;
            // 02070 LET C=C+1
            C_int = C_int+1;

  Lbl_02080:
            // 02080 NEXT I
            int dummy_2080=0; // Ignore this line.
        }; // End-For(I_int)
        // 02090 LET A(G)=A(G)+2*(C/2-INT(C/2))*2^J
        A_int_arr[G_int] = A_int_arr[G_int]+2*(C_int/2-INT(C_int/2))*IPower(2,J_int);
        // 02100 NEXT J
        int dummy_2100=0; // Ignore this line.
    }; // End-For(J_int)
    // 02110 IF W=1 THEN 2200
    if(W_int==1)goto Lbl_02200;
    // 02120 LET C=0
    C_int = 0;
    // 02130 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 02140 IF A(I)>1 THEN 2200
        if(A_int_arr[I_int]>1)goto Lbl_02200;
        // 02150 IF A(I)=0 THEN 2170
        if(A_int_arr[I_int]==0)goto Lbl_02170;
        // 02160 LET C=C+1
        C_int = C_int+1;

  Lbl_02170:
        // 02170 NEXT I
        int dummy_2170=0; // Ignore this line.
    }; // End-For(I_int)
    // 02180 IF C/2<>INT(C/2) THEN 2200
    if(C_int/2!=INT(C_int/2))goto Lbl_02200;
    // 02190 LET A(G)=1-A(G)
    A_int_arr[G_int] = 1-A_int_arr[G_int];

  Lbl_02200:
    // 02200 PRINT "PILE  SIZE"
    b2c_printf("Pile  size\n");
    // 02210 FOR I=1 TO N
    for(I_int=1;I_int<=N_int;I_int++){
        // 02220 PRINT I;A(I)
        b2c_printf(" %d ëÅp²X %d \n",I_int,A_int_arr[I_int]);
        // 02230 NEXT I
        int dummy_2230=0; // Ignore this line.
    }; // End-For(I_int)
    // 02240 IF W=2 THEN 2270
    if(W_int==2)goto Lbl_02270;
    // 02250 GOSUB 2490
    Routine_02490();
    // 02260 IF Z=1 THEN 1640
    if(Z_int==1)goto Lbl_01640;

  Lbl_02270:
    // 02270 PRINT "YOUR MOVE - PILE, NUMBER TO BE REMOVED";
    b2c_printf("Your move - pile, number to be removed");
    // 02280 INPUT X,Y
    // Start of Basic INPUT statement 02280
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&X_int,args,0)) ||
                (err += b2c_strtoi(&Y_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02280
    // 02290 IF X>N THEN 2270
    if(X_int>N_int)goto Lbl_02270;
    // 02300 IF X<1 THEN 2270
    if(X_int<1)goto Lbl_02270;
    // 02310 IF X<>INT(X) THEN 2270
    if(X_int!=INT(X_int))goto Lbl_02270;
    // 02320 IF Y>A(X) THEN 2270
    if(Y_int>A_int_arr[X_int])goto Lbl_02270;
    // 02330 IF Y<1 THEN 2270
    if(Y_int<1)goto Lbl_02270;
    // 02340 IF Y<>INT(Y) THEN 2270
    if(Y_int!=INT(Y_int))goto Lbl_02270;
    // 02350 LET A(X)=A(X)-Y
    A_int_arr[X_int] = A_int_arr[X_int]-Y_int;
    // 02360 GOSUB 2490
    Routine_02490();
    // 02370 IF Z=1 THEN 1620
    if(Z_int==1)goto Lbl_01620;
    // 02380 GOTO 1520
    goto Lbl_01520;

  Lbl_02390:
    // 02390 PRINT "do you want to play another game";
    b2c_printf("Do you want to play another game");

  Lbl_02400:
    // 02400 INPUT Q9$
    // Start of Basic INPUT statement 02400
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Q9_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 02400
    // 02410 IF Q9$="YES" GOTO 2470
    if(strcmp(Q9_str,"Yes")==0)goto Lbl_02470;
    // 02420 IF Q9$="yes" GOTO 2470
    if(strcmp(Q9_str,"Yes")==0)goto Lbl_02470;
    // 02430 IF Q9$="NO" GOTO 2480
    if(strcmp(Q9_str,"No")==0)goto Lbl_02480;
    // 02440 IF Q9$="no" GOTO 2480
    if(strcmp(Q9_str,"No")==0)goto Lbl_02480;
    // 02450 PRINT "PLEASE.  YES OR NO."
    b2c_printf("Please.  Yes or no.\n");
    // 02460 GOTO 2400 
    goto Lbl_02400;

  Lbl_02470:
    // 02470 GOTO 1260
    goto Lbl_01260;

  Lbl_02480:
    // 02480 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
