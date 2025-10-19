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
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    P_int_arr[4][2];                           // Basic: P 
int    T_int;                                     // Basic: T 
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------
void Routine_01500();

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

void Routine_01500(){
    // 01500 FOR J=1 TO 2
    for(J_int=1;J_int<=2;J_int++){
        // 01510 FOR I=1 TO 4
        for(I_int=1;I_int<=4;I_int++){
            // 01520 P(I,J)=INT(10*RND(1))
            P_int_arr[I_int][J_int] = INT(10*RND(1));
            // 01530 NEXT I
            int dummy_1530=0; // Ignore this line.
        }; // End-For(I_int)
        // 01540 NEXT J
        int dummy_1540=0; // Ignore this line.
    }; // End-For(J_int)
    // 01550 GOTO 01560
    goto Lbl_01560;

  Lbl_01560:
    // 01560 RETURN
    return;
};

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT TAB(33);"MUGWUMP"
    b2c_printf("Mugwump\n");
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    b2c_printf("Creative computing  morristown, new jersey\n");
    // 01020 PRINT:PRINT:PRINT
    b2c_printf("");
    // 01030 REM     COURTESY PEOPLE'S COMPUTER COMPANY
    // 01040 DIM P(4,2)
    // 01050 PRINT "THE OBJECT OF THIS GAME IS TO FIND FOUR MUGWUMPS"
    b2c_printf("The object of this game is to find four mugwumps\n");
    // 01060 PRINT "HIDDEN ON A 10 BY 10 GRID.  HOMEBASE IS POSITION 0,0."
    b2c_printf("Hidden on a 10 by 10 grid.  Homebase is position 0,0.\n");
    // 01070 PRINT "ANY GUESS YOU MAKE MUST BE TWO NUMBERS WITH EACH"
    b2c_printf("Any guess you make must be two numbers with each\n");
    // 01080 PRINT "NUMBER BETWEEN 0 AND 9, INCLUSIVE.  FIRST NUMBER"
    b2c_printf("Number between 0 and 9, inclusive.  First number\n");
    // 01090 PRINT "IS DISTANCE TO RIGHT OF HOMEBASE AND SECOND NUMBER"
    b2c_printf("Is distance to right of homebase and second number\n");
    // 01100 PRINT "IS DISTANCE ABOVE HOMEBASE."
    b2c_printf("Is distance above homebase.\n");
    // 01110 PRINT
    b2c_printf("");
    // 01120 PRINT "YOU GET 10 TRIES.  AFTER EACH TRY, I WILL TELL"
    b2c_printf("You get 10 tries.  After each try, i will tell\n");
    // 01130 PRINT "YOU HOW FAR YOU ARE FROM EACH MUGWUMP."
    b2c_printf("You how far you are from each mugwump.\n");
    // 01140 PRINT
    b2c_printf("");

  Lbl_01150:
    // 01150 GOSUB 1500
    Routine_01500();
    // 01160 T=0
    T_int = 0;

  Lbl_01170:
    // 01170 T=T+1
    T_int = T_int+1;
    // 01180 PRINT
    b2c_printf("");
    // 01190 PRINT
    b2c_printf("");
    // 01200 PRINT "TURN NO.";T;"-- WHAT IS YOUR GUESS";
    b2c_printf("Turn no. %d Turn no.-- what is your guess-- what is your guess\n",T_int);
    // 01210 INPUT M,N
    // Start of Basic INPUT statement 01210
    {
        int numargs=2;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&M_int,args,0)) ||
                (err += b2c_strtoi(&N_int,args,1)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01210
    // 01220 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01230 IF P(I,1)=-1 THEN 1310
        if(P_int_arr[I_int][1]==-1)goto Lbl_01310;
        // 01240 IF P(I,1)<>M THEN 1290
        if(P_int_arr[I_int][1]!=M_int)goto Lbl_01290;
        // 01250 IF P(I,2)<>N THEN 1290
        if(P_int_arr[I_int][2]!=N_int)goto Lbl_01290;
        // 01260 P(I,1)=-1
        P_int_arr[I_int][1] = -1;
        // 01270 PRINT "YOU HAVE FOUND MUGWUMP";I
        b2c_printf("You have found mugwump %d \n",I_int);
        // 01280 GOTO 1310
        goto Lbl_01310;

  Lbl_01290:
        // 01290 D=SQR((P(I,1)-M)^2+(P(I,2)-N)^2)
        D_int = SQR(IPower((P_int_arr[I_int][1]-M_int),2)+IPower((P_int_arr[I_int][2]-N_int),2));
        // 01300 PRINT "YOU ARE";(INT(D*10))/10;"UNITS FROM MUGWUMP";I
        b2c_printf("You areUnits from mugwump %d \n",I_int);

  Lbl_01310:
        // 01310 NEXT I
        int dummy_1310=0; // Ignore this line.
    }; // End-For(I_int)
    // 01320 FOR J=1 TO 4
    for(J_int=1;J_int<=4;J_int++){
        // 01330 IF P(J,1)<>-1 THEN 1380
        if(P_int_arr[J_int][1]!=-1)goto Lbl_01380;
        // 01340 NEXT J
        int dummy_1340=0; // Ignore this line.
    }; // End-For(J_int)
    // 01350 PRINT
    b2c_printf("");
    // 01360 PRINT "YOU GOT THEM ALL IN";T;"TURNS!"
    b2c_printf("You got them all in %d You got them all inTurns!\n",T_int);
    // 01370 GOTO 1450
    goto Lbl_01450;

  Lbl_01380:
    // 01380 IF T<10 THEN 1170
    if(T_int<10)goto Lbl_01170;
    // 01390 PRINT
    b2c_printf("");
    // 01400 PRINT "SORRY, THAT'S 10 TRIES.  HERE IS WHERE THEY'RE HIDING:"
    b2c_printf("Sorry, that's 10 tries.  Here is where they're hiding:\n");
    // 01410 FOR I=1 TO 4
    for(I_int=1;I_int<=4;I_int++){
        // 01420 IF P(I,1)=-1 THEN 1440
        if(P_int_arr[I_int][1]==-1)goto Lbl_01440;
        // 01430 PRINT "MUGWUMP";I;"IS AT (";P(I,1);",";P(I,2);")"
        b2c_printf("Mugwump %d MugwumpIs at (Is at ( %d Is at (,, %d ,)\n",I_int,P_int_arr[I_int][1],P_int_arr[I_int][2]);

  Lbl_01440:
        // 01440 NEXT I
        int dummy_1440=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_01450:
    // 01450 PRINT
    b2c_printf("");
    // 01460 PRINT "THAT WAS FUN! LET'S PLAY AGAIN......."
    b2c_printf("That was fun! Let's play again.......\n");
    // 01470 PRINT "FOUR MORE MUGWUMPS ARE NOW IN HIDING."
    b2c_printf("Four more mugwumps are now in hiding.\n");
    // 01480 GOTO 1150
    goto Lbl_01150;
    // 01490 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
