/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/flipflop.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e6f50d80ac0 ---------A   00002 PRINT TAB(32);"FLIPFLOP"
    0x5e6f50d81e70 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e6f50d81db0 ---------A   00006 PRINT
    0x5e6f50d702b0 ---------A   00010 REM *** CREATED BY MICHAEL CASS
    0x5e6f50d7f770 ---------A   00015 DIM A$(20)
    0x5e6f50d81ff0 ---------A   00020 PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    0x5e6f50d7fd80 ---------A   00030 PRINT
    0x5e6f50d7fdf0 ---------A   00040 PRINT "X X X X X X X X X X"
    0x5e6f50d815e0 ---------A   00050 PRINT
    0x5e6f50d81f30 ---------A   00060 PRINT "TO THIS:"
    0x5e6f50d7fb20 ---------A   00070 PRINT
    0x5e6f50d820a0 ---------A   00080 PRINT "O O O O O O O O O O"
    0x5e6f50d82140 ---------A   00090 PRINT
    0x5e6f50d80680 ---------A   00100 PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    0x5e6f50d877e0 ---------A   00110 PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    0x5e6f50d87990 ---------A   00120 PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    0x5e6f50d87af0 ---------A   00130 PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    0x5e6f50d87c00 ---------A   00140 PRINT "11 (ELEVEN)."
    0x5e6f50d87c50 ---------A   00170 PRINT
    0x5e6f50d87ca0 ---------A T 00180 REM
    0x5e6f50d88020 ---------A   00190 Q=RND(1)
    0x5e6f50d88150 ---------A   00200 PRINT "HERE IS THE STARTING LINE OF X'S."
    0x5e6f50d881c0 ---------A   00210 PRINT
    0x5e6f50d88470 ---------A   00220 C=0
    0x5e6f50d885a0 ---------A T 00230 PRINT "1 2 3 4 5 6 7 8 9 10"
    0x5e6f50d886f0 ---------A   00240 PRINT "X X X X X X X X X X"
    0x5e6f50d88760 ---------A   00250 PRINT
    0x5e6f50d887d0 ---------A   00260 REM
    0x5e6f50d7f610 ---------A   00270 FOR X=1 TO 10
    0x5e6f50d88e30 ---------A   00280 A$(X)="X"
    0x5e6f50d88f60 ---------A   00290 NEXT X
    0x5e6f50d88ff0 ---------A   00300 GOTO 320
    0x5e6f50d89150 ---------A T 00310 PRINT "ILLEGAL ENTRY--TRY AGAIN."
    0x5e6f50d894d0 ---------A T 00320 PRINT "INPUT THE NUMBER";
    0x5e6f50d7f5b0 ---------A   00330 INPUT N
    0x5e6f50d899f0 ---------A   00340 IF N<>INT(N) THEN 310
    0x5e6f50d89c50 ---------A   00350 IF N=11 THEN 180
    0x5e6f50d89eb0 ---------A   00360 IF N>11 THEN 310
    0x5e6f50d8a110 ---------A   00370 IF N=0 THEN 230
    0x5e6f50d8a450 ---------A   00380 IF M=N THEN 510
    0x5e6f50d8a6a0 ---------A   00390 M=N
    0x5e6f50d8a9f0 ---------A   00400 IF A$(N)="O" THEN 480
    0x5e6f50d8ad30 ---------A   00410 A$(N)="O"
    0x5e6f50d8bb80 ---------A T 00420 R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    0x5e6f50d8bfb0 ---------A   00430 N=R-INT(R)
    0x5e6f50d8c3d0 ---------A   00440 N=INT(10*N)
    0x5e6f50d8c720 ---------A   00450 IF A$(N)="O" THEN 480
    0x5e6f50d8ca40 ---------A   00460 A$(N)="O"
    0x5e6f50d8cab0 ---------A   00470 GOTO 610
    0x5e6f50d8cdb0 ---------A T 00480 A$(N)="X"
    0x5e6f50d8d020 ---------A   00490 IF M=N THEN 420
    0x5e6f50d8d0b0 ---------A   00500 GOTO 610
    0x5e6f50d8d3f0 ---------A T 00510 IF A$(N)="O" THEN 590
    0x5e6f50d8d730 ---------A   00520 A$(N)="O"
    0x5e6f50d8e4e0 ---------A T 00530 R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    0x5e6f50d8e910 ---------A   00540 N=R-INT(R)
    0x5e6f50d8ed30 ---------A   00550 N=INT(10*N)
    0x5e6f50d8f080 ---------A   00560 IF A$(N)="O" THEN 590
    0x5e6f50d8f3a0 ---------A   00570 A$(N)="O"
    0x5e6f50d8f410 ---------A   00580 GOTO 610
    0x5e6f50d8f710 ---------A T 00590 A$(N)="X"
    0x5e6f50d8f990 ---------A   00600 IF M=N THEN 530
    0x5e6f50d8fb10 ---------A T 00610 PRINT "1 2 3 4 5 6 7 8 9 10"
    0x5e6f50d902f0 ---------A   00620 FOR Z=1 TO 10: PRINT A$(Z);" ";: NEXT Z
    0x5e6f50d90630 ---------A   00630 C=C+1
    0x5e6f50d90ab0 ---------A   00640 PRINT
    0x5e6f50d90d90 ---------A   00650 FOR Z=1 TO 10
    0x5e6f50d910f0 ---------A   00660 IF A$(Z)<>"O" THEN 320
    0x5e6f50d91230 ---------A   00670 NEXT Z
    0x5e6f50d914c0 ---------A   00680 IF C>12 THEN 710
    0x5e6f50d91830 ---------A   00690 PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
    0x5e6f50d918d0 ---------A   00700 GOTO 720
    0x5e6f50d91c40 ---------A T 00710 PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
    0x5e6f50d91dc0 ---------A T 00720 PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
    0x5e6f50d91fe0 ---------A   00730 INPUT X$
    0x5e6f50d92400 ---------A   00740 IF LEFT$(X$,1)="N" THEN 780
    0x5e6f50d92480 ---------A   00760 PRINT
    0x5e6f50d924f0 ---------A   00770 GOTO 180
    0x5e6f50d92530 ---------A T 00780 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00180      00350T, 00770T
     00230      00370T
     00310      00340T, 00360T
     00320      00300T, 00660T
     00420      00490T
     00480      00400T, 00450T
     00510      00380T
     00530      00600T
     00590      00510T, 00560T
     00610      00470T, 00500T, 00580T
     00710      00680T
     00720      00700T
     00780      00740T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5e6f50d80ac0 (00002)   0x000000000000 (00000)   0x5e6f50d92530 (00780)   0x5e6f50d92530 (00780)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01790 - 10000    8220 

 */



/*
 *  Symbol Table Listing for 'basic/flipflop.bas'
 *
    A$              Array    String          {0,19} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    C                        Float       
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
    LEFT$           Function String          args=2, char*  int    
    LEN             Function Integer         args=1, char*  
    LOC             Function Integer         args=1, int    
    LOF             Function Integer         args=1, int    
    LOG             Function Float           args=1, float  
    LPOS            Function Integer         args=1, Any    
    M                        Float       
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Float       
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Float       
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
    X$                       String      
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/flipflop.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5e6f50d80ac0 ---------A   01000 PRINT TAB(31000);"FLIPFLOP"
    0x5e6f50d81e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5e6f50d81db0 ---------A   01020 PRINT
    0x5e6f50d702b0 ---------A   01030 REM *** CREATED BY MICHAEL CASS
    0x5e6f50d7f770 ---------A   01040 DIM A$(20)
    0x5e6f50d81ff0 ---------A   01050 PRINT "THE OBJECT OF THIS PUZZLE IS TO CHANGE THIS:"
    0x5e6f50d7fd80 ---------A   01060 PRINT
    0x5e6f50d7fdf0 ---------A   01070 PRINT "X X X X X X X X X X"
    0x5e6f50d815e0 ---------A   01080 PRINT
    0x5e6f50d81f30 ---------A   01090 PRINT "TO THIS:"
    0x5e6f50d7fb20 ---------A   01100 PRINT
    0x5e6f50d820a0 ---------A   01110 PRINT "O O O O O O O O O O"
    0x5e6f50d82140 ---------A   01120 PRINT
    0x5e6f50d80680 ---------A   01130 PRINT "BY TYPING THE NUMBER CORRESPONDING TO THE POSITION OF THE"
    0x5e6f50d877e0 ---------A   01140 PRINT "LETTER ON SOME NUMBERS, ONE POSITION WILL CHANGE, ON"
    0x5e6f50d87990 ---------A   01150 PRINT "OTHERS, TWO WILL CHANGE.  TO RESET LINE TO ALL X'S, TYPE 0"
    0x5e6f50d87af0 ---------A   01160 PRINT "(ZERO) AND TO START OVER IN THE MIDDLE OF A GAME, TYPE "
    0x5e6f50d87c00 ---------A   01170 PRINT "11 (ELEVEN)."
    0x5e6f50d87c50 ---------A   01180 PRINT
    0x5e6f50d87ca0 ---------A   01190 REM
    0x5e6f50d88020 ---------A T 01200 Q=RND(1)
    0x5e6f50d88150 ---------A   01210 PRINT "HERE IS THE STARTING LINE OF X'S."
    0x5e6f50d881c0 ---------A   01220 PRINT
    0x5e6f50d88470 ---------A   01230 C=0
    0x5e6f50d885a0 ---------A T 01240 PRINT "1 2 3 4 5 6 7 8 9 10"
    0x5e6f50d886f0 ---------A   01250 PRINT "X X X X X X X X X X"
    0x5e6f50d88760 ---------A   01260 PRINT
    0x5e6f50d887d0 ---------A   01270 REM
    0x5e6f50d7f610 ---------A   01280 FOR X=1 TO 10
    0x5e6f50d88e30 ---------A   01290 A$(X)="X"
    0x5e6f50d88f60 ---------A   01300 NEXT X
    0x5e6f50d88ff0 ---------A   01310 GOTO 1330
    0x5e6f50d89150 ---------A T 01320 PRINT "ILLEGAL ENTRY--TRY AGAIN."
    0x5e6f50d894d0 ---------A T 01330 PRINT "INPUT THE NUMBER";
    0x5e6f50d7f5b0 ---------A   01340 INPUT N
    0x5e6f50d899f0 ---------A   01350 IF N<>INT(N) THEN 1320
    0x5e6f50d89c50 ---------A   01360 IF N=11 THEN 1200
    0x5e6f50d89eb0 ---------A   01370 IF N>11 THEN 1320
    0x5e6f50d8a110 ---------A   01380 IF N=0 THEN 1240
    0x5e6f50d8a450 ---------A   01390 IF M=N THEN 1520
    0x5e6f50d8a6a0 ---------A   01400 M=N
    0x5e6f50d8a9f0 ---------A   01410 IF A$(N)="O" THEN 1490
    0x5e6f50d8ad30 ---------A   01420 A$(N)="O"
    0x5e6f50d8bb80 ---------A T 01430 R=TAN(Q+N/Q-N)-SIN(Q/N)+336*SIN(8*N)
    0x5e6f50d8bfb0 ---------A   01440 N=R-INT(R)
    0x5e6f50d8c3d0 ---------A   01450 N=INT(10*N)
    0x5e6f50d8c720 ---------A   01460 IF A$(N)="O" THEN 1490
    0x5e6f50d8ca40 ---------A   01470 A$(N)="O"
    0x5e6f50d8cab0 ---------A   01480 GOTO 1620
    0x5e6f50d8cdb0 ---------A T 01490 A$(N)="X"
    0x5e6f50d8d020 ---------A   01500 IF M=N THEN 1430
    0x5e6f50d8d0b0 ---------A   01510 GOTO 1620
    0x5e6f50d8d3f0 ---------A T 01520 IF A$(N)="O" THEN 1600
    0x5e6f50d8d730 ---------A   01530 A$(N)="O"
    0x5e6f50d8e4e0 ---------A T 01540 R=.592*(1/TAN(Q/N+Q))/SIN(N*2+Q)-COS(N)
    0x5e6f50d8e910 ---------A   01550 N=R-INT(R)
    0x5e6f50d8ed30 ---------A   01560 N=INT(10*N)
    0x5e6f50d8f080 ---------A   01570 IF A$(N)="O" THEN 1600
    0x5e6f50d8f3a0 ---------A   01580 A$(N)="O"
    0x5e6f50d8f410 ---------A   01590 GOTO 1620
    0x5e6f50d8f710 ---------A T 01600 A$(N)="X"
    0x5e6f50d8f990 ---------A   01610 IF M=N THEN 1540
    0x5e6f50d8fb10 ---------A T 01620 PRINT "1 2 3 4 5 6 7 8 9 10"
    0x5e6f50d902f0 ---------A   01630 FOR Z=1 TO 10: PRINT A$(Z);" ";: NEXT Z
    0x5e6f50d90630 ---------A   01640 C=C+1
    0x5e6f50d90ab0 ---------A   01650 PRINT
    0x5e6f50d90d90 ---------A   01660 FOR Z=1 TO 10
    0x5e6f50d910f0 ---------A   01670 IF A$(Z)<>"O" THEN 1330
    0x5e6f50d91230 ---------A   01680 NEXT Z
    0x5e6f50d914c0 ---------A   01690 IF C>12 THEN 1720
    0x5e6f50d91830 ---------A   01700 PRINT "VERY GOOD.  YOU GUESSED IT IN ONLY";C;"GUESSES."
    0x5e6f50d918d0 ---------A   01710 GOTO 1730
    0x5e6f50d91c40 ---------A T 01720 PRINT "TRY HARDER NEXT TIME.  IT TOOK YOU";C;"GUESSES."
    0x5e6f50d91dc0 ---------A T 01730 PRINT "DO YOU WANT TO TRY ANOTHER PUZZLE";
    0x5e6f50d91fe0 ---------A   01740 INPUT X$
    0x5e6f50d92400 ---------A   01750 IF LEFT$(X$,1)="N" THEN 1780
    0x5e6f50d92480 ---------A   01760 PRINT
    0x5e6f50d924f0 ---------A   01770 GOTO 1200
    0x5e6f50d92530 ---------A T 01780 END
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
char*  A_str_arr[20];                             // Basic: A$ 
float  C_flt;                                     // Basic: C 
float  M_flt;                                     // Basic: M 
float  N_flt;                                     // Basic: N 
float  Q_flt;                                     // Basic: Q 
float  R_flt;                                     // Basic: R 
float  X_flt;                                     // Basic: X 
char*  X_str;                                     // Basic: X$ 
float  Z_flt;                                     // Basic: Z 
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
