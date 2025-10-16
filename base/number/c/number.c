/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/number.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64fc4581a590 ---------A   01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    0x64fc4582af00 ---------A   01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    0x64fc4582a850 ---------A   01020 REM THE GAME IS TO GUESS THE CHOSEN
    0x64fc4582b520 ---------A   01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE
    0x64fc4582bcf0 ---------A T 01040 LET R=1+INT(10000*RND)
    0x64fc4582be70 ---------A   01050 LET Y=0
    0x64fc4582bdb0 ---------A   01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    0x64fc4582bf30 ---------A   01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    0x64fc4582bff0 ---------A   01080 PRINT" IS FROM 1 TO 10,000"
    0x64fc4582aac0 ---------A   01090 PRINT"GOOD LUCK!!!!!!!"
    0x64fc45829be0 ---------A   01100 PRINT
    0x64fc4582a680 ---------A T 01110 PRINT"YOUR GUESS IS = ";
    0x64fc45829610 ---------A   01120 INPUT X
    0x64fc45831b40 ---------A   01130 LET Y=Y+1
    0x64fc458295b0 ---------A   01140 IF X=R THEN 1170
    0x64fc45831fd0 ---------A   01150 IF X>R THEN 1270
    0x64fc45832030 ---------A   01160 GOTO 1290
    0x64fc45832170 ---------A T 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    0x64fc458323a0 ---------A   01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    0x64fc45832430 ---------A   01190 PRINT
    0x64fc45832540 ---------A   01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    0x64fc45832690 ---------A   01210 PRINT"IF NOT TYPE '0'"
    0x64fc458328a0 ---------A   01220 INPUT L
    0x64fc45832b00 ---------A   01230 IF L=1 THEN 1250
    0x64fc45832b60 ---------A   01240 STOP
    0x64fc45832be0 ---------A T 01250 PRINT
    0x64fc45832c30 ---------A   01260 GOTO 1040
    0x64fc45832d70 ---------A T 01270 PRINT"TOO HIGH, TRY AGAIN"
    0x64fc45832dc0 ---------A   01280 GOTO 1110
    0x64fc45832f00 ---------A T 01290 PRINT"TOO LOW, TRY AGAIN"
    0x64fc45832f70 ---------A   01300 GOTO 1110
    0x64fc45832fb0 ---------A   01310 END
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

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x64fc4581a590 (01000)   0x000000000000 (00000)   0x64fc45832fb0 (01310)   0x64fc45832fb0 (01310)   


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
 *  Symbol Table Listing for 'basic/number.bas'
 *
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    L                        Float       
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Y                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/number.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x64fc4581a590 ---------A   01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    0x64fc4582af00 ---------A   01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    0x64fc4582a850 ---------A   01020 REM THE GAME IS TO GUESS THE CHOSEN
    0x64fc4582b520 ---------A   01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE
    0x64fc4582bcf0 ---------A T 01040 LET R=1+INT(10000*RND)
    0x64fc4582be70 ---------A   01050 LET Y=0
    0x64fc4582bdb0 ---------A   01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    0x64fc4582bf30 ---------A   01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    0x64fc4582bff0 ---------A   01080 PRINT" IS FROM 1 TO 10,000"
    0x64fc4582aac0 ---------A   01090 PRINT"GOOD LUCK!!!!!!!"
    0x64fc45829be0 ---------A   01100 PRINT
    0x64fc4582a680 ---------A T 01110 PRINT"YOUR GUESS IS = ";
    0x64fc45829610 ---------A   01120 INPUT X
    0x64fc45831b40 ---------A   01130 LET Y=Y+1
    0x64fc458295b0 ---------A   01140 IF X=R THEN 1170
    0x64fc45831fd0 ---------A   01150 IF X>R THEN 1270
    0x64fc45832030 ---------A   01160 GOTO 1290
    0x64fc45832170 ---------A T 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    0x64fc458323a0 ---------A   01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    0x64fc45832430 ---------A   01190 PRINT
    0x64fc45832540 ---------A   01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    0x64fc45832690 ---------A   01210 PRINT"IF NOT TYPE '0'"
    0x64fc458328a0 ---------A   01220 INPUT L
    0x64fc45832b00 ---------A   01230 IF L=1 THEN 1250
    0x64fc45832b60 ---------A   01240 STOP
    0x64fc45832be0 ---------A T 01250 PRINT
    0x64fc45832c30 ---------A   01260 GOTO 1040
    0x64fc45832d70 ---------A T 01270 PRINT"TOO HIGH, TRY AGAIN"
    0x64fc45832dc0 ---------A   01280 GOTO 1110
    0x64fc45832f00 ---------A T 01290 PRINT"TOO LOW, TRY AGAIN"
    0x64fc45832f70 ---------A   01300 GOTO 1110
    0x64fc45832fb0 ---------A   01310 END
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
float  L_flt;                                     // Basic: L 
float  R_flt;                                     // Basic: R 
float  X_flt;                                     // Basic: X 
float  Y_flt;                                     // Basic: Y 
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
    // 01000 REM THE COMPUTER CHOOSES A NUMBER FROM
    // 01010 REM 1 TO 10,000 AT RANDOM, THE OBJECT OF
    // 01020 REM THE GAME IS TO GUESS THE CHOSEN
    // 01030 REM NUMBER IN AS FEW GUESSES AS POSSIBLE

  Lbl_01040:
    // 01040 LET R=1+INT(10000*RND)
    R_flt = 1+INT(10000*RND());
    // 01050 LET Y=0
    Y_flt = 0;
    // 01060 PRINT"A RANDOM NUMBER HAS BEEN PICKED"
    b2c_printf("A random number has been picked\n");
    // 01070 PRINT"TRY GUESSING IT, HINT THE NUMBER"
    b2c_printf("Try guessing it, hint the number\n");
    // 01080 PRINT" IS FROM 1 TO 10,000"
    b2c_printf(" is from 1 to 10,000\n");
    // 01090 PRINT"GOOD LUCK!!!!!!!"
    b2c_printf("Good luck!!!!!!!\n");
    // 01100 PRINT
    b2c_printf("\n");

  Lbl_01110:
    // 01110 PRINT"YOUR GUESS IS = ";
    b2c_printf("Your guess is = ");
    // 01120 INPUT X
    // Start of Basic INPUT statement 01120
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtof(&X_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01120
    // 01130 LET Y=Y+1
    Y_flt = Y_flt+1;
    // 01140 IF X=R THEN 1170
    if(X_flt==R_flt)goto Lbl_01170;
    // 01150 IF X>R THEN 1270
    if(X_flt>R_flt)goto Lbl_01270;
    // 01160 GOTO 1290
    goto Lbl_01290;

  Lbl_01170:
    // 01170 PRINT"NOT BAD!!!!-YOU GOT IT!!!!"
    b2c_printf("Not bad!!!!-You got it!!!!\n");
    // 01180 PRINT"YOUR NUMBER OF TRIES WERE ";Y
    b2c_printf("Your number of tries were  %.2f \n",Y_flt);
    // 01190 PRINT
    b2c_printf("\n");
    // 01200 PRINT"IF YOU WANT TO TRY AGAIN, TYPE '1'"
    b2c_printf("If you want to try again, type '1'\n");
    // 01210 PRINT"IF NOT TYPE '0'"
    b2c_printf("If not type '0'\n");
    // 01220 INPUT L
    // Start of Basic INPUT statement 01220
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtof(&L_flt,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01220
    // 01230 IF L=1 THEN 1250
    if(L_flt==1)goto Lbl_01250;
    // 01240 STOP
    exit(1);

  Lbl_01250:
    // 01250 PRINT
    b2c_printf("\n");
    // 01260 GOTO 1040
    goto Lbl_01040;

  Lbl_01270:
    // 01270 PRINT"TOO HIGH, TRY AGAIN"
    b2c_printf("Too high, try again\n");
    // 01280 GOTO 1110
    goto Lbl_01110;

  Lbl_01290:
    // 01290 PRINT"TOO LOW, TRY AGAIN"
    b2c_printf("Too low, try again\n");
    // 01300 GOTO 1110
    goto Lbl_01110;
    // 01310 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
