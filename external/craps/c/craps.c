/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b0f29b19ac0 ---------A   00005 PRINT TAB(33);"CRAPS"
    0x5b0f29b1ae10 ---------A   00010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b0f29b1af90 ---------A   00012 PRINT:PRINT:PRINT
    0x5b0f29b092b0 ---------A   00015 LET R=0
    0x5b0f29b1a0f0 ---------A   00020 PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x5b0f29b18ff0 ---------A   00021 LET T=1
    0x5b0f29b18be0 ---------A   00022 PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x5b0f29b185b0 ---------A   00023 INPUT Z
    0x5b0f29b20840 ---------A T 00024 LET X=(RND(0))
    0x5b0f29b18f80 ---------A   00025 LET T =T+1
    0x5b0f29b20d50 ---------A   00026 IF T<=Z GOTO 24
    0x5b0f29b20ef0 ---------A T 00027 PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x5b0f29b210e0 ---------A   00028 INPUT F
    0x5b0f29b21220 ---------A   00030 PRINT "I WILL NOW THROW THE DICE"
    0x5b0f29b217b0 ---------A T 00040 LET E=INT(7*RND(1))
    0x5b0f29b21d40 ---------A   00041 LET S=INT(7*RND(1))
    0x5b0f29b22090 ---------A   00042 LET X=E+S
    0x5b0f29b222c0 ---------A   00050 IF X=7 GOTO 180 
    0x5b0f29b22520 ---------A   00055 IF X=11 GOTO 180
    0x5b0f29b22780 ---------A   00060 IF X=1 GOTO 40
    0x5b0f29b229e0 ---------A   00062 IF X=2 GOTO 195
    0x5b0f29b22c40 ---------A   00065 IF X=0 GOTO 40
    0x5b0f29b22ea0 ---------A   00070 IF X=2 GOTO 200
    0x5b0f29b23100 ---------A   00080 IF X=3 GOTO 200
    0x5b0f29b23360 ---------A   00090 IF X=12 GOTO 200
    0x5b0f29b235c0 ---------A   00125 IF X=5 GOTO 220
    0x5b0f29b23820 ---------A   00130 IF X =6 GOTO 220
    0x5b0f29b23a80 ---------A   00140 IF X=8 GOTO 220
    0x5b0f29b23ce0 ---------A   00150 IF X=9 GOTO 220
    0x5b0f29b23f40 ---------A   00160 IF X =10 GOTO 220
    0x5b0f29b241a0 ---------A   00170 IF X=4 GOTO 220
    0x5b0f29b24400 ---------A T 00180 PRINT X "- NATURAL....A WINNER!!!!"
    0x5b0f29b24830 ---------A   00185 PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x5b0f29b24ac0 ---------A   00190 GOTO 210
    0x5b0f29b24d20 ---------A T 00195 PRINT X"- SNAKE EYES....YOU LOSE."
    0x5b0f29b25070 ---------A   00196 PRINT "YOU LOSE"F "DOLLARS."
    0x5b0f29b253a0 ---------A   00197 LET F=0-F
    0x5b0f29b25420 ---------A   00198 GOTO 210
    0x5b0f29b25670 ---------A T 00200 PRINT X " - CRAPS...YOU LOSE."
    0x5b0f29b259c0 ---------A   00205 PRINT "YOU LOSE"F"DOLLARS."
    0x5b0f29b25cf0 ---------A   00206 LET F=0-F
    0x5b0f29b26040 ---------A T 00210 LET R= R+F
    0x5b0f29b260d0 ---------A   00211 GOTO 320
    0x5b0f29b26320 ---------A T 00220 PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x5b0f29b268b0 ---------A T 00230 LET H=INT(7*RND(1))
    0x5b0f29b26e40 ---------A   00231 LET Q=INT(7*RND(1))
    0x5b0f29b27250 ---------A   00232 LET O=H+Q
    0x5b0f29b27480 ---------A   00240 IF O=1 GOTO 230
    0x5b0f29b276e0 ---------A   00250 IF O=7 GOTO 290
    0x5b0f29b27940 ---------A   00255 IF O=0 GOTO 230
    0x5b0f29b27bc0 ---------A   00260 IF O=X GOTO 310
    0x5b0f29b27e70 ---------A   00270 PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x5b0f29b27ef0 ---------A   00280 GOTO 230
    0x5b0f29b28130 ---------A T 00290 PRINT O "- CRAPS. YOU LOSE."
    0x5b0f29b28380 ---------A   00291 PRINT "YOU LOSE $"F
    0x5b0f29b286b0 ---------A   00292 F=0-F
    0x5b0f29b28720 ---------A   00293 GOTO 210
    0x5b0f29b287a0 ----------   00300 GOTO 320
    0x5b0f29b28a20 ---------A T 00310 PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x5b0f29b28f90 ---------A   00311 PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x5b0f29b292c0 ---------A   00312 LET F=2*F
    0x5b0f29b29360 ---------A   00313 GOTO 210
    0x5b0f29b294e0 ---------A T 00320 PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x5b0f29b296f0 ---------A   00330 INPUT M
    0x5b0f29b29930 ---------A   00331 IF R<0 GOTO 334
    0x5b0f29b29fa0 ---------A   00332 IF R>0 GOTO 336
    0x5b0f29b2a200 ---------A   00333 IF R=0 GOTO 338
    0x5b0f29b2a490 ---------A T 00334 PRINT "YOU ARE NOW UNDER $";-R
    0x5b0f29b2a510 ---------A   00335 GOTO 340
    0x5b0f29b2a750 ---------A T 00336 PRINT "YOU ARE NOW AHEAD $";R
    0x5b0f29b2a7d0 ---------A   00337 GOTO 340
    0x5b0f29b2a910 ---------A T 00338 PRINT "YOU ARE NOW EVEN AT 0"
    0x5b0f29b2ab40 ---------A T 00340 IF M=5 GOTO 27
    0x5b0f29b2ada0 ---------A   00341 IF R<0 GOTO 350
    0x5b0f29b2b000 ---------A   00342 IF R>0 GOTO 353
    0x5b0f29b2b260 ---------A   00343 IF R=0 GOTO 355
    0x5b0f29b2b420 ---------A T 00350 PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x5b0f29b2b4c0 ---------A   00351 GOTO 360
    0x5b0f29b2b620 ---------A T 00353 PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x5b0f29b2b6c0 ---------A   00354 GOTO 360
    0x5b0f29b2b830 ---------A T 00355 PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x5b0f29b2b880 ---------A T 00360 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00024      00026T
     00027      00340T
     00040      00060T, 00065T
     00180      00050T, 00055T
     00195      00062T
     00200      00070T, 00080T, 00090T
     00210      00190T, 00198T, 00293T, 00313T
     00220      00125T, 00130T, 00140T, 00150T, 00160T, 00170T
     00230      00240T, 00255T, 00280T
     00290      00250T
     00310      00260T
     00320      00211T, 00300T
     00334      00331T
     00336      00332T
     00338      00333T
     00340      00335T, 00337T
     00350      00341T
     00353      00342T
     00355      00343T
     00360      00351T, 00354T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b0f29b19ac0 (00005)   0x000000000000 (00000)   0x5b0f29b2b880 (00360)   0x5b0f29b2b880 (00360)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01810 - 10000    8200 

 */



/*
 *  Symbol Table Listing for 'basic/craps.bas'
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
    E                        Float       
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Float       
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Float       
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
    O                        Float       
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
    S                        Float       
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Z                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/craps.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b0f29b19ac0 ---------A   01000 PRINT TAB(33);"CRAPS"
    0x5b0f29b1ae10 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b0f29b1af90 ---------A   01020 PRINT:PRINT:PRINT
    0x5b0f29b092b0 ---------A   01030 LET R=0
    0x5b0f29b1a0f0 ---------A   01040 PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x5b0f29b18ff0 ---------A   01050 LET T=1
    0x5b0f29b18be0 ---------A   01060 PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x5b0f29b185b0 ---------A   01070 INPUT Z
    0x5b0f29b20840 ---------A T 01080 LET X=(RND(0))
    0x5b0f29b18f80 ---------A   01090 LET T =T+1
    0x5b0f29b20d50 ---------A   01100 IF T<=Z GOTO 1080
    0x5b0f29b20ef0 ---------A T 01110 PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x5b0f29b210e0 ---------A   01120 INPUT F
    0x5b0f29b21220 ---------A   01130 PRINT "I WILL NOW THROW THE DICE"
    0x5b0f29b217b0 ---------A T 01140 LET E=INT(7*RND(1))
    0x5b0f29b21d40 ---------A   01150 LET S=INT(7*RND(1))
    0x5b0f29b22090 ---------A   01160 LET X=E+S
    0x5b0f29b222c0 ---------A   01170 IF X=7 GOTO 1310 
    0x5b0f29b22520 ---------A   01180 IF X=11 GOTO 1310
    0x5b0f29b22780 ---------A   01190 IF X=1 GOTO 1140
    0x5b0f29b229e0 ---------A   01200 IF X=2 GOTO 1340
    0x5b0f29b22c40 ---------A   01210 IF X=0 GOTO 1140
    0x5b0f29b22ea0 ---------A   01220 IF X=2 GOTO 1380
    0x5b0f29b23100 ---------A   01230 IF X=3 GOTO 1380
    0x5b0f29b23360 ---------A   01240 IF X=12 GOTO 1380
    0x5b0f29b235c0 ---------A   01250 IF X=5 GOTO 1430
    0x5b0f29b23820 ---------A   01260 IF X =6 GOTO 1430
    0x5b0f29b23a80 ---------A   01270 IF X=8 GOTO 1430
    0x5b0f29b23ce0 ---------A   01280 IF X=9 GOTO 1430
    0x5b0f29b23f40 ---------A   01290 IF X =10 GOTO 1430
    0x5b0f29b241a0 ---------A   01300 IF X=4 GOTO 1430
    0x5b0f29b24400 ---------A T 01310 PRINT X "- NATURAL....A WINNER!!!!"
    0x5b0f29b24830 ---------A   01320 PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x5b0f29b24ac0 ---------A   01330 GOTO 1410
    0x5b0f29b24d20 ---------A T 01340 PRINT X"- SNAKE EYES....YOU LOSE."
    0x5b0f29b25070 ---------A   01350 PRINT "YOU LOSE"F "DOLLARS."
    0x5b0f29b253a0 ---------A   01360 LET F=0-F
    0x5b0f29b25420 ---------A   01370 GOTO 1410
    0x5b0f29b25670 ---------A T 01380 PRINT X " - CRAPS...YOU LOSE."
    0x5b0f29b259c0 ---------A   01390 PRINT "YOU LOSE"F"DOLLARS."
    0x5b0f29b25cf0 ---------A   01400 LET F=0-F
    0x5b0f29b26040 ---------A T 01410 LET R= R+F
    0x5b0f29b260d0 ---------A   01420 GOTO 1610
    0x5b0f29b26320 ---------A T 01430 PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x5b0f29b268b0 ---------A T 01440 LET H=INT(7*RND(1))
    0x5b0f29b26e40 ---------A   01450 LET Q=INT(7*RND(1))
    0x5b0f29b27250 ---------A   01460 LET O=H+Q
    0x5b0f29b27480 ---------A   01470 IF O=1 GOTO 1440
    0x5b0f29b276e0 ---------A   01480 IF O=7 GOTO 1530
    0x5b0f29b27940 ---------A   01490 IF O=0 GOTO 1440
    0x5b0f29b27bc0 ---------A   01500 IF O=X GOTO 1570
    0x5b0f29b27e70 ---------A   01510 PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x5b0f29b27ef0 ---------A   01520 GOTO 1440
    0x5b0f29b28130 ---------A T 01530 PRINT O "- CRAPS. YOU LOSE."
    0x5b0f29b28380 ---------A   01540 PRINT "YOU LOSE $"F
    0x5b0f29b286b0 ---------A   01550 F=0-F
    0x5b0f29b28720 ---------A   01560 GOTO 1410
    0x5b0f29b28a20 ---------A T 01570 PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x5b0f29b28f90 ---------A   01580 PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x5b0f29b292c0 ---------A   01590 LET F=2*F
    0x5b0f29b29360 ---------A   01600 GOTO 1410
    0x5b0f29b294e0 ---------A T 01610 PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x5b0f29b296f0 ---------A   01620 INPUT M
    0x5b0f29b29930 ---------A   01630 IF R<0 GOTO 1660
    0x5b0f29b29fa0 ---------A   01640 IF R>0 GOTO 1680
    0x5b0f29b2a200 ---------A   01650 IF R=0 GOTO 1700
    0x5b0f29b2a490 ---------A T 01660 PRINT "YOU ARE NOW UNDER $";-R
    0x5b0f29b2a510 ---------A   01670 GOTO 1710
    0x5b0f29b2a750 ---------A T 01680 PRINT "YOU ARE NOW AHEAD $";R
    0x5b0f29b2a7d0 ---------A   01690 GOTO 1710
    0x5b0f29b2a910 ---------A T 01700 PRINT "YOU ARE NOW EVEN AT 0"
    0x5b0f29b2ab40 ---------A T 01710 IF M=5 GOTO 1110
    0x5b0f29b2ada0 ---------A   01720 IF R<0 GOTO 1750
    0x5b0f29b2b000 ---------A   01730 IF R>0 GOTO 1770
    0x5b0f29b2b260 ---------A   01740 IF R=0 GOTO 1790
    0x5b0f29b2b420 ---------A T 01750 PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x5b0f29b2b4c0 ---------A   01760 GOTO 1800
    0x5b0f29b2b620 ---------A T 01770 PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x5b0f29b2b6c0 ---------A   01780 GOTO 1800
    0x5b0f29b2b830 ---------A T 01790 PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x5b0f29b2b880 ---------A T 01800 END
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
float  E_flt;                                     // Basic: E 
float  F_flt;                                     // Basic: F 
float  H_flt;                                     // Basic: H 
float  M_flt;                                     // Basic: M 
float  O_flt;                                     // Basic: O 
float  Q_flt;                                     // Basic: Q 
float  R_flt;                                     // Basic: R 
float  S_flt;                                     // Basic: S 
float  T_flt;                                     // Basic: T 
float  X_flt;                                     // Basic: X 
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
