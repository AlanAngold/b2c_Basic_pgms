/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/stars.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d06db78ab80 ---------A   00010 PRINT TAB(34);"STARS"
    0x5d06db78bed0 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d06db78afc0 ---------A   00030 PRINT:PRINT:PRINT
    0x5d06db78a910 ---------A   00100 REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    0x5d06db78b580 ---------A   00140 REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    0x5d06db789eb0 ---------A   00150 A=100:M=7
    0x5d06db7896d0 ---------A   00170 INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x5d06db789670 ---------A   00190 IF LEFT$(A$,1)="N" THEN 280
    0x5d06db78a880 ---------A   00200 REM *** INSTRUCTIONS ON HOW TO PLAY
    0x5d06db78b5c0 ---------A   00210 PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    0x5d06db791bc0 ---------A   00220 PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    0x5d06db791d60 ---------A   00230 PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    0x5d06db791f00 ---------A   00240 PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    0x5d06db792090 ---------A   00250 PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    0x5d06db792340 ---------A   00260 PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    0x5d06db7923c0 ---------A   00270 REM *** COMPUTER THINKS OF A NUMBER
    0x5d06db792440 ---------A T 00280 PRINT
    0x5d06db7924b0 ---------A   00290 PRINT
    0x5d06db792b90 ---------A   00300 X=INT(A*RND(1)+1)
    0x5d06db792d20 ---------A   00310 PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    0x5d06db792db0 ---------A   00320 REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    0x5d06db793170 ---------A   00330 FOR K=1 TO M
    0x5d06db7931f0 ---------A   00340 PRINT
    0x5d06db793360 ---------A   00350 PRINT "YOUR GUESS";
    0x5d06db793570 ---------A   00360 INPUT G
    0x5d06db7937f0 ---------A   00370 IF G=X THEN 600
    0x5d06db793cf0 ---------A   00380 D=ABS(G-X)
    0x5d06db793f40 ---------A   00390 IF D>=64 THEN 510
    0x5d06db7941a0 ---------A   00400 IF D>=32 THEN 500
    0x5d06db794400 ---------A   00410 IF D>=16 THEN 490
    0x5d06db794660 ---------A   00420 IF D>=8 THEN 480
    0x5d06db7948c0 ---------A   00430 IF D>=4 THEN 470
    0x5d06db794b20 ---------A   00440 IF D>=2 THEN 460
    0x5d06db794eb0 ---------A   00450 PRINT "*";
    0x5d06db795020 ---------A T 00460 PRINT "*";
    0x5d06db795190 ---------A T 00470 PRINT "*";
    0x5d06db795300 ---------A T 00480 PRINT "*";
    0x5d06db795470 ---------A T 00490 PRINT "*";
    0x5d06db7955e0 ---------A T 00500 PRINT "*";
    0x5d06db795750 ---------A T 00510 PRINT "*";
    0x5d06db7957c0 ---------A   00520 PRINT
    0x5d06db7958f0 ---------A   00530 NEXT K
    0x5d06db795990 ---------A   00540 REM *** DID NOT GUESS IN M GUESSES
    0x5d06db795a30 ---------A   00550 PRINT 
    0x5d06db795e90 ---------A   00560 PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    0x5d06db795f10 ---------A   00580 GOTO 650
    0x5d06db795f80 ---------A   00590 REM *** WE HAVE A WINNER
    0x5d06db796370 ---------A T 00600 PRINT:FOR N=1 TO 79
    0x5d06db7964f0 ---------A   00610 PRINT "*";
    0x5d06db796620 ---------A   00620 NEXT N
    0x5d06db796720 ---------A   00630 PRINT:PRINT
    0x5d06db796a80 ---------A   00640 PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    0x5d06db796af0 ---------A T 00650 GOTO 280
    0x5d06db796b30 ---------A   00660 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00280      00190T, 00650T
     00460      00440T
     00470      00430T
     00480      00420T
     00490      00410T
     00500      00400T
     00510      00390T
     00600      00370T
     00650      00580T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5d06db78ab80 (00010)   0x5d06db78ab80 (00010)   0x5d06db796b30 (00660)   0x5d06db796b30 (00660)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01540 - 10000    8470 

 */



/*
 *  Symbol Table Listing for 'basic/stars.bas'
 *
    A                        Integer     
    A$                       String      
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
    D                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/stars.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d06db78ab80 ---------A   01000 PRINT TAB(34);"STARS"
    0x5d06db78bed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d06db78afc0 ---------A   01020 PRINT:PRINT:PRINT
    0x5d06db78a910 ---------A   01030 REM *** STARS - PEOPLE'S COMPUTER CENTER, MENLO PARK, CA
    0x5d06db78b580 ---------A   01040 REM *** A IS LIMIT ON NUMBER, M IS NUMBER OF GUESSES
    0x5d06db789eb0 ---------A   01050 A=100:M=7
    0x5d06db7896d0 ---------A   01060 INPUT "DO YOU WANT INSTRUCTIONS";A$
    0x5d06db789670 ---------A   01070 IF LEFT$(A$,1)="N" THEN 1160
    0x5d06db78a880 ---------A   01080 REM *** INSTRUCTIONS ON HOW TO PLAY
    0x5d06db78b5c0 ---------A   01090 PRINT "I AM THINKING OF A WHOLE NUMBER FROM 1 TO";A
    0x5d06db791bc0 ---------A   01100 PRINT "TRY TO GUESS MY NUMBER.  AFTER YOU GUESS, I"
    0x5d06db791d60 ---------A   01110 PRINT "WILL TYPE ONE OR MORE STARS (*).  THE MORE"
    0x5d06db791f00 ---------A   01120 PRINT "STARS I TYPE, THE CLOSER YOU ARE TO MY NUMBER."
    0x5d06db792090 ---------A   01130 PRINT "ONE STAR (*) MEANS FAR AWAY, SEVEN STARS (*******)"
    0x5d06db792340 ---------A   01140 PRINT "MEANS REALLY CLOSE!  YOU GET";M;"GUESSES."
    0x5d06db7923c0 ---------A   01150 REM *** COMPUTER THINKS OF A NUMBER
    0x5d06db792440 ---------A T 01160 PRINT
    0x5d06db7924b0 ---------A   01170 PRINT
    0x5d06db792b90 ---------A   01180 X=INT(A*RND(1)+1)
    0x5d06db792d20 ---------A   01190 PRINT "OK, I AM THINKING OF A NUMBER, START GUESSING."
    0x5d06db792db0 ---------A   01200 REM *** GUESSING BEGINS, HUMAN GETS M GUESSES
    0x5d06db793170 ---------A   01210 FOR K=1 TO M
    0x5d06db7931f0 ---------A   01220 PRINT
    0x5d06db793360 ---------A   01230 PRINT "YOUR GUESS";
    0x5d06db793570 ---------A   01240 INPUT G
    0x5d06db7937f0 ---------A   01250 IF G=X THEN 1470
    0x5d06db793cf0 ---------A   01260 D=ABS(G-X)
    0x5d06db793f40 ---------A   01270 IF D>=64 THEN 1390
    0x5d06db7941a0 ---------A   01280 IF D>=32 THEN 1380
    0x5d06db794400 ---------A   01290 IF D>=16 THEN 1370
    0x5d06db794660 ---------A   01300 IF D>=8 THEN 1360
    0x5d06db7948c0 ---------A   01310 IF D>=4 THEN 1350
    0x5d06db794b20 ---------A   01320 IF D>=2 THEN 1340
    0x5d06db794eb0 ---------A   01330 PRINT "*";
    0x5d06db795020 ---------A T 01340 PRINT "*";
    0x5d06db795190 ---------A T 01350 PRINT "*";
    0x5d06db795300 ---------A T 01360 PRINT "*";
    0x5d06db795470 ---------A T 01370 PRINT "*";
    0x5d06db7955e0 ---------A T 01380 PRINT "*";
    0x5d06db795750 ---------A T 01390 PRINT "*";
    0x5d06db7957c0 ---------A   01400 PRINT
    0x5d06db7958f0 ---------A   01410 NEXT K
    0x5d06db795990 ---------A   01420 REM *** DID NOT GUESS IN M GUESSES
    0x5d06db795a30 ---------A   01430 PRINT 
    0x5d06db795e90 ---------A   01440 PRINT "SORRY, THAT'S";M;"GUESSES. THE NUMBER WAS";X
    0x5d06db795f10 ---------A   01450 GOTO 1520
    0x5d06db795f80 ---------A   01460 REM *** WE HAVE A WINNER
    0x5d06db796370 ---------A T 01470 PRINT:FOR N=1 TO 79
    0x5d06db7964f0 ---------A   01480 PRINT "*";
    0x5d06db796620 ---------A   01490 NEXT N
    0x5d06db796720 ---------A   01500 PRINT:PRINT
    0x5d06db796a80 ---------A   01510 PRINT "YOU GOT IT IN";K;"GUESSES!!!  LET'S PLAY AGAIN..."
    0x5d06db796af0 ---------A T 01520 GOTO 1160
    0x5d06db796b30 ---------A   01530 END
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
int    A_int;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
int    D_int;                                     // Basic: D 
int    G_int;                                     // Basic: G 
int    K_int;                                     // Basic: K 
int    M_int;                                     // Basic: M 
int    N_int;                                     // Basic: N 
int    X_int;                                     // Basic: X 
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
