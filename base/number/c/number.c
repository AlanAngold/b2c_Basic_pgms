/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/number/basic/number.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x55c0b2fc9d00 ---------A   01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    0x55c0b2fc9de0 ---------A   01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    0x55c0b2fc9eb0 ---------A   01020 REM THE GAME IS TO GUESS THE CHOSEN
    0x55c0b2fc9fa0 ---------A   01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE
    0x55c0b2fca450 ---------A T 01040 LET R=1+INT(10000*RND)
    0x55c0b2fca6b0 ---------A   01050 LET Y=0
    0x55c0b2fca7e0 ---------A   01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    0x55c0b2fca930 ---------A   01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    0x55c0b2fcaa70 ---------A   01080 PRINT" IS FROM 1 TO 10,000"
    0x55c0b2fca4a0 ---------A   01090 PRINT"GOOD LUCK!!!!!!!"
    0x55c0b2fceeb0 ---------A   01100 PRINT
    0x55c0b2fcf000 ---------A T 01110 PRINT"YOUR GUESS IS = ";
    0x55c0b2fcf150 ---------A   01120 INPUT X
    0x55c0b2fcf370 ---------A   01130 LET Y=Y+1
    0x55c0b2fcf4e0 ---------A   01140 IF X=R THEN 1170
    0x55c0b2fcf660 ---------A   01150 IF X>R THEN 1270
    0x55c0b2fcf6f0 ---------A   01160 GOTO 1290
    0x55c0b2fcf950 ---------A T 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    0x55c0b2fcfb10 ---------A   01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    0x55c0b2fcfba0 ---------A   01190 PRINT
    0x55c0b2fcfcf0 ---------A   01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    0x55c0b2fcfe20 ---------A   01210 PRINT"IF NOT TYPE '0'"
    0x55c0b2fcff70 ---------A   01220 INPUT L
    0x55c0b2fd0130 ---------A   01230 IF L=1 THEN 1250
    0x55c0b2fd0190 ---------A   01240 STOP
    0x55c0b2fd0210 ---------A T 01250 PRINT
    0x55c0b2fd0290 ---------A   01260 GOTO 1040
    0x55c0b2fd03b0 ---------A T 01270 PRINT"TOO HIGH, TRY AGAIN"
    0x55c0b2fd0430 ---------A   01280 GOTO 1110
    0x55c0b2fd0550 ---------A T 01290 PRINT"TOO LOW, TRY AGAIN"
    0x55c0b2fd05c0 ---------A   01300 GOTO 1110
    0x55c0b2fd0600 ---------A   01310 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01040      01260T
     01110      01280T, 01300T
     01170      01140T
     01250      01230T
     01270      01150T
     01290      01160T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x55c0b2fc9d00   0x55c0b2fc9d00   0x55c0b2fd0600   0x55c0b2fd0600 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01320 - 10000    8690 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/number/basic/number.bas'
 *
    INT   Function Integer     args=1, float 
    L              Integer 
    R              Integer 
    RND   Function Integer     args=1, int   
    X              Integer 
    Y              Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/number/basic/number.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x55c0b2fc9d00 ---------A   01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    0x55c0b2fc9de0 ---------A   01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    0x55c0b2fc9eb0 ---------A   01020 REM THE GAME IS TO GUESS THE CHOSEN
    0x55c0b2fc9fa0 ---------A   01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE
    0x55c0b2fca450 ---------A T 01040 LET R=1+INT(10000*RND)
    0x55c0b2fca6b0 ---------A   01050 LET Y=0
    0x55c0b2fca7e0 ---------A   01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    0x55c0b2fca930 ---------A   01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    0x55c0b2fcaa70 ---------A   01080 PRINT" IS FROM 1 TO 10,000"
    0x55c0b2fca4a0 ---------A   01090 PRINT"GOOD LUCK!!!!!!!"
    0x55c0b2fceeb0 ---------A   01100 PRINT
    0x55c0b2fcf000 ---------A T 01110 PRINT"YOUR GUESS IS = ";
    0x55c0b2fcf150 ---------A   01120 INPUT X
    0x55c0b2fcf370 ---------A   01130 LET Y=Y+1
    0x55c0b2fcf4e0 ---------A   01140 IF X=R THEN 1170
    0x55c0b2fcf660 ---------A   01150 IF X>R THEN 1270
    0x55c0b2fcf6f0 ---------A   01160 GOTO 1290
    0x55c0b2fcf950 ---------A T 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    0x55c0b2fcfb10 ---------A   01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    0x55c0b2fcfba0 ---------A   01190 PRINT
    0x55c0b2fcfcf0 ---------A   01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    0x55c0b2fcfe20 ---------A   01210 PRINT"IF NOT TYPE '0'"
    0x55c0b2fcff70 ---------A   01220 INPUT L
    0x55c0b2fd0130 ---------A   01230 IF L=1 THEN 1250
    0x55c0b2fd0190 ---------A   01240 STOP
    0x55c0b2fd0210 ---------A T 01250 PRINT
    0x55c0b2fd0290 ---------A   01260 GOTO 1040
    0x55c0b2fd03b0 ---------A T 01270 PRINT"TOO HIGH, TRY AGAIN"
    0x55c0b2fd0430 ---------A   01280 GOTO 1110
    0x55c0b2fd0550 ---------A T 01290 PRINT"TOO LOW, TRY AGAIN"
    0x55c0b2fd05c0 ---------A   01300 GOTO 1110
    0x55c0b2fd0600 ---------A   01310 END
 */

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
int   L_int;        // Comments?
int   R_int;        // Comments?
int   X_int;        // Comments?
int   Y_int;        // Comments?
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
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    // 01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    // 01020 REM THE GAME IS TO GUESS THE CHOSEN
    // 01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE

  Lbl_01040:
    // 01040 LET R=1+INT(10000*RND)
    R_int = 1+INT(10000*RND());
    // 01050 LET Y=0
    Y_int = 0;
    // 01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    b2c_fprintf(stdout,"A RANDOM NUMBER HAS BEEN PICKED"); b2c_fprintf(stdout,"\n");
    // 01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    b2c_fprintf(stdout,"TRY GUESSING IT, HINT THE NUMBER"); b2c_fprintf(stdout,"\n");
    // 01080 PRINT" IS FROM 1 TO 10,000"
    b2c_fprintf(stdout," IS FROM 1 TO 10,000"); b2c_fprintf(stdout,"\n");
    // 01090 PRINT"GOOD LUCK!!!!!!!"
    b2c_fprintf(stdout,"GOOD LUCK!!!!!!!"); b2c_fprintf(stdout,"\n");
    // 01100 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");

  Lbl_01110:
    // 01110 PRINT"YOUR GUESS IS = ";
    b2c_fprintf(stdout,"YOUR GUESS IS = "); 
    // 01120 INPUT X
    // Start of Basic INPUT statement 01120
    printf(" ? ");
    char inpbuf_01120[100];
    if(fgets(inpbuf_01120,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01120=strtok(inpbuf_01120," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01120==nullptr){
            X_int = 0;
        }else{
            X_int = atof(ps_01120);
        };
    }; // End of Basic INPUT statement 01120
    // 01130 LET Y=Y+1
    Y_int = Y_int+1;
    // 01140 IF X=R THEN 1170
    if(X_int==R_int)goto Lbl_01170;
    // 01150 IF X>R THEN 1270
    if(X_int>R_int)goto Lbl_01270;
    // 01160 GOTO 1290
    goto Lbl_01290;

  Lbl_01170:
    // 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    b2c_fprintf(stdout,"NOT BAD!!!!-YOU GOT IT!!!!"); b2c_fprintf(stdout,"\n");
    // 01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    b2c_fprintf(stdout,"YOUR NUMBER OF TRIES WERE  %d ",Y_int); b2c_fprintf(stdout,"\n");
    // 01190 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    b2c_fprintf(stdout,"IF YOU WANT TO TRY AGAIN, TYPE '1'"); b2c_fprintf(stdout,"\n");
    // 01210 PRINT"IF NOT TYPE '0'"
    b2c_fprintf(stdout,"IF NOT TYPE '0'"); b2c_fprintf(stdout,"\n");
    // 01220 INPUT L
    // Start of Basic INPUT statement 01220
    printf(" ? ");
    char inpbuf_01220[100];
    if(fgets(inpbuf_01220,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01220=strtok(inpbuf_01220," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01220==nullptr){
            L_int = 0;
        }else{
            L_int = atof(ps_01220);
        };
    }; // End of Basic INPUT statement 01220
    // 01230 IF L=1 THEN 1250
    if(L_int==1)goto Lbl_01250;
    // 01240 STOP
    exit(1);

  Lbl_01250:
    // 01250 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01260 GOTO 1040
    goto Lbl_01040;

  Lbl_01270:
    // 01270 PRINT"TOO HIGH, TRY AGAIN"
    b2c_fprintf(stdout,"TOO HIGH, TRY AGAIN"); b2c_fprintf(stdout,"\n");
    // 01280 GOTO 1110
    goto Lbl_01110;

  Lbl_01290:
    // 01290 PRINT"TOO LOW, TRY AGAIN"
    b2c_fprintf(stdout,"TOO LOW, TRY AGAIN"); b2c_fprintf(stdout,"\n");
    // 01300 GOTO 1110
    goto Lbl_01110;
    // 01310 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
