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
    0x62141fbbfb80 ---------A   00005 PRINT TAB(33);"CRAPS"
    0x62141fbc0ed0 ---------A   00010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62141fbc1050 ---------A   00012 PRINT:PRINT:PRINT
    0x62141fbaf2b0 ---------A   00015 LET R=0
    0x62141fbc01b0 ---------A   00020 PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x62141fbbf0b0 ---------A   00021 LET T=1
    0x62141fbbeca0 ---------A   00022 PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x62141fbbe670 ---------A   00023 INPUT Z
    0x62141fbc6900 ---------A T 00024 LET X=(RND(0))
    0x62141fbbf040 ---------A   00025 LET T =T+1
    0x62141fbc6e10 ---------A   00026 IF T<=Z GOTO 24
    0x62141fbc6fb0 ---------A T 00027 PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x62141fbc71a0 ---------A   00028 INPUT F
    0x62141fbc72e0 ---------A   00030 PRINT "I WILL NOW THROW THE DICE"
    0x62141fbc7870 ---------A T 00040 LET E=INT(7*RND(1))
    0x62141fbc7e00 ---------A   00041 LET S=INT(7*RND(1))
    0x62141fbc8150 ---------A   00042 LET X=E+S
    0x62141fbc8380 ---------A   00050 IF X=7 GOTO 180 
    0x62141fbc85e0 ---------A   00055 IF X=11 GOTO 180
    0x62141fbc8840 ---------A   00060 IF X=1 GOTO 40
    0x62141fbc8aa0 ---------A   00062 IF X=2 GOTO 195
    0x62141fbc8d00 ---------A   00065 IF X=0 GOTO 40
    0x62141fbc8f60 ---------A   00070 IF X=2 GOTO 200
    0x62141fbc91c0 ---------A   00080 IF X=3 GOTO 200
    0x62141fbc9420 ---------A   00090 IF X=12 GOTO 200
    0x62141fbc9680 ---------A   00125 IF X=5 GOTO 220
    0x62141fbc98e0 ---------A   00130 IF X =6 GOTO 220
    0x62141fbc9b40 ---------A   00140 IF X=8 GOTO 220
    0x62141fbc9da0 ---------A   00150 IF X=9 GOTO 220
    0x62141fbca000 ---------A   00160 IF X =10 GOTO 220
    0x62141fbca260 ---------A   00170 IF X=4 GOTO 220
    0x62141fbca4c0 ---------A T 00180 PRINT X "- NATURAL....A WINNER!!!!"
    0x62141fbca8f0 ---------A   00185 PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x62141fbcab80 ---------A   00190 GOTO 210
    0x62141fbcade0 ---------A T 00195 PRINT X"- SNAKE EYES....YOU LOSE."
    0x62141fbcb130 ---------A   00196 PRINT "YOU LOSE"F "DOLLARS."
    0x62141fbcb460 ---------A   00197 LET F=0-F
    0x62141fbcb4e0 ---------A   00198 GOTO 210
    0x62141fbcb730 ---------A T 00200 PRINT X " - CRAPS...YOU LOSE."
    0x62141fbcba80 ---------A   00205 PRINT "YOU LOSE"F"DOLLARS."
    0x62141fbcbdb0 ---------A   00206 LET F=0-F
    0x62141fbcc100 ---------A T 00210 LET R= R+F
    0x62141fbcc190 ---------A   00211 GOTO 320
    0x62141fbcc3e0 ---------A T 00220 PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x62141fbcc970 ---------A T 00230 LET H=INT(7*RND(1))
    0x62141fbccf00 ---------A   00231 LET Q=INT(7*RND(1))
    0x62141fbcd310 ---------A   00232 LET O=H+Q
    0x62141fbcd540 ---------A   00240 IF O=1 GOTO 230
    0x62141fbcd7a0 ---------A   00250 IF O=7 GOTO 290
    0x62141fbcda00 ---------A   00255 IF O=0 GOTO 230
    0x62141fbcdc80 ---------A   00260 IF O=X GOTO 310
    0x62141fbcdf30 ---------A   00270 PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x62141fbcdfb0 ---------A   00280 GOTO 230
    0x62141fbce1f0 ---------A T 00290 PRINT O "- CRAPS. YOU LOSE."
    0x62141fbce440 ---------A   00291 PRINT "YOU LOSE $"F
    0x62141fbce770 ---------A   00292 F=0-F
    0x62141fbce7e0 ---------A   00293 GOTO 210
    0x62141fbce860 ----------   00300 GOTO 320
    0x62141fbceae0 ---------A T 00310 PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x62141fbcf050 ---------A   00311 PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x62141fbcf380 ---------A   00312 LET F=2*F
    0x62141fbcf420 ---------A   00313 GOTO 210
    0x62141fbcf5a0 ---------A T 00320 PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x62141fbcf7b0 ---------A   00330 INPUT M
    0x62141fbcf9f0 ---------A   00331 IF R<0 GOTO 334
    0x62141fbd0060 ---------A   00332 IF R>0 GOTO 336
    0x62141fbd02c0 ---------A   00333 IF R=0 GOTO 338
    0x62141fbd0550 ---------A T 00334 PRINT "YOU ARE NOW UNDER $";-R
    0x62141fbd05d0 ---------A   00335 GOTO 340
    0x62141fbd0810 ---------A T 00336 PRINT "YOU ARE NOW AHEAD $";R
    0x62141fbd0890 ---------A   00337 GOTO 340
    0x62141fbd09d0 ---------A T 00338 PRINT "YOU ARE NOW EVEN AT 0"
    0x62141fbd0c00 ---------A T 00340 IF M=5 GOTO 27
    0x62141fbd0e60 ---------A   00341 IF R<0 GOTO 350
    0x62141fbd10c0 ---------A   00342 IF R>0 GOTO 353
    0x62141fbd1320 ---------A   00343 IF R=0 GOTO 355
    0x62141fbd14e0 ---------A T 00350 PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x62141fbd1580 ---------A   00351 GOTO 360
    0x62141fbd16e0 ---------A T 00353 PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x62141fbd1780 ---------A   00354 GOTO 360
    0x62141fbd18f0 ---------A T 00355 PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x62141fbd1940 ---------A T 00360 END
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
   A) 0x62141fbbfb80 (00005)   0x62141fbbfb80 (00005)   0x62141fbd1940 (00360)   0x62141fbd1940 (00360)   


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
    E                        Integer     
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    F                        Integer     
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    H                        Integer     
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
    M                        Integer     
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    O                        Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
    R                        Integer     
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S                        Integer     
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Unknown (0)    args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
    Z                        Integer     

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
    0x62141fbbfb80 ---------A   01000 PRINT TAB(33);"CRAPS"
    0x62141fbc0ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62141fbc1050 ---------A   01020 PRINT:PRINT:PRINT
    0x62141fbaf2b0 ---------A   01030 LET R=0
    0x62141fbc01b0 ---------A   01040 PRINT"2,3,12 ARE LOSERS; 4,5,6,8,9,10 ARE POINTS; 7,11 ARE NATURAL WINNERS."
    0x62141fbbf0b0 ---------A   01050 LET T=1
    0x62141fbbeca0 ---------A   01060 PRINT "PICK A NUMBER AND INPUT TO ROLL DICE";
    0x62141fbbe670 ---------A   01070 INPUT Z
    0x62141fbc6900 ---------A T 01080 LET X=(RND(0))
    0x62141fbbf040 ---------A   01090 LET T =T+1
    0x62141fbc6e10 ---------A   01100 IF T<=Z GOTO 1080
    0x62141fbc6fb0 ---------A T 01110 PRINT"INPUT THE AMOUNT OF YOUR WAGER.";
    0x62141fbc71a0 ---------A   01120 INPUT F
    0x62141fbc72e0 ---------A   01130 PRINT "I WILL NOW THROW THE DICE"
    0x62141fbc7870 ---------A T 01140 LET E=INT(7*RND(1))
    0x62141fbc7e00 ---------A   01150 LET S=INT(7*RND(1))
    0x62141fbc8150 ---------A   01160 LET X=E+S
    0x62141fbc8380 ---------A   01170 IF X=7 GOTO 1310 
    0x62141fbc85e0 ---------A   01180 IF X=11 GOTO 1310
    0x62141fbc8840 ---------A   01190 IF X=1 GOTO 1140
    0x62141fbc8aa0 ---------A   01200 IF X=2 GOTO 1340
    0x62141fbc8d00 ---------A   01210 IF X=0 GOTO 1140
    0x62141fbc8f60 ---------A   01220 IF X=2 GOTO 1380
    0x62141fbc91c0 ---------A   01230 IF X=3 GOTO 1380
    0x62141fbc9420 ---------A   01240 IF X=12 GOTO 1380
    0x62141fbc9680 ---------A   01250 IF X=5 GOTO 1430
    0x62141fbc98e0 ---------A   01260 IF X =6 GOTO 1430
    0x62141fbc9b40 ---------A   01270 IF X=8 GOTO 1430
    0x62141fbc9da0 ---------A   01280 IF X=9 GOTO 1430
    0x62141fbca000 ---------A   01290 IF X =10 GOTO 1430
    0x62141fbca260 ---------A   01300 IF X=4 GOTO 1430
    0x62141fbca4c0 ---------A T 01310 PRINT X "- NATURAL....A WINNER!!!!"
    0x62141fbca8f0 ---------A   01320 PRINT X"PAYS EVEN MONEY, YOU WIN"F"DOLLARS"
    0x62141fbcab80 ---------A   01330 GOTO 1410
    0x62141fbcade0 ---------A T 01340 PRINT X"- SNAKE EYES....YOU LOSE."
    0x62141fbcb130 ---------A   01350 PRINT "YOU LOSE"F "DOLLARS."
    0x62141fbcb460 ---------A   01360 LET F=0-F
    0x62141fbcb4e0 ---------A   01370 GOTO 1410
    0x62141fbcb730 ---------A T 01380 PRINT X " - CRAPS...YOU LOSE."
    0x62141fbcba80 ---------A   01390 PRINT "YOU LOSE"F"DOLLARS."
    0x62141fbcbdb0 ---------A   01400 LET F=0-F
    0x62141fbcc100 ---------A T 01410 LET R= R+F
    0x62141fbcc190 ---------A   01420 GOTO 1610
    0x62141fbcc3e0 ---------A T 01430 PRINT X "IS THE POINT. I WILL ROLL AGAIN"
    0x62141fbcc970 ---------A T 01440 LET H=INT(7*RND(1))
    0x62141fbccf00 ---------A   01450 LET Q=INT(7*RND(1))
    0x62141fbcd310 ---------A   01460 LET O=H+Q
    0x62141fbcd540 ---------A   01470 IF O=1 GOTO 1440
    0x62141fbcd7a0 ---------A   01480 IF O=7 GOTO 1530
    0x62141fbcda00 ---------A   01490 IF O=0 GOTO 1440
    0x62141fbcdc80 ---------A   01500 IF O=X GOTO 1570
    0x62141fbcdf30 ---------A   01510 PRINT O " - NO POINT. I WILL ROLL AGAIN"
    0x62141fbcdfb0 ---------A   01520 GOTO 1440
    0x62141fbce1f0 ---------A T 01530 PRINT O "- CRAPS. YOU LOSE."
    0x62141fbce440 ---------A   01540 PRINT "YOU LOSE $"F
    0x62141fbce770 ---------A   01550 F=0-F
    0x62141fbce7e0 ---------A   01560 GOTO 1410
    0x62141fbceae0 ---------A T 01570 PRINT X"- A WINNER.........CONGRATS!!!!!!!!"
    0x62141fbcf050 ---------A   01580 PRINT X "AT 2 TO 1 ODDS PAYS YOU...LET ME SEE..."2*F"DOLLARS"
    0x62141fbcf380 ---------A   01590 LET F=2*F
    0x62141fbcf420 ---------A   01600 GOTO 1410
    0x62141fbcf5a0 ---------A T 01610 PRINT " IF YOU WANT TO PLAY AGAIN PRINT 5 IF NOT PRINT 2";
    0x62141fbcf7b0 ---------A   01620 INPUT M
    0x62141fbcf9f0 ---------A   01630 IF R<0 GOTO 1660
    0x62141fbd0060 ---------A   01640 IF R>0 GOTO 1680
    0x62141fbd02c0 ---------A   01650 IF R=0 GOTO 1700
    0x62141fbd0550 ---------A T 01660 PRINT "YOU ARE NOW UNDER $";-R
    0x62141fbd05d0 ---------A   01670 GOTO 1710
    0x62141fbd0810 ---------A T 01680 PRINT "YOU ARE NOW AHEAD $";R
    0x62141fbd0890 ---------A   01690 GOTO 1710
    0x62141fbd09d0 ---------A T 01700 PRINT "YOU ARE NOW EVEN AT 0"
    0x62141fbd0c00 ---------A T 01710 IF M=5 GOTO 1110
    0x62141fbd0e60 ---------A   01720 IF R<0 GOTO 1750
    0x62141fbd10c0 ---------A   01730 IF R>0 GOTO 1770
    0x62141fbd1320 ---------A   01740 IF R=0 GOTO 1790
    0x62141fbd14e0 ---------A T 01750 PRINT"TOO BAD, YOU ARE IN THE HOLE. COME AGAIN."
    0x62141fbd1580 ---------A   01760 GOTO 1800
    0x62141fbd16e0 ---------A T 01770 PRINT"CONGRATULATIONS---YOU CAME OUT A WINNER. COME AGAIN!"
    0x62141fbd1780 ---------A   01780 GOTO 1800
    0x62141fbd18f0 ---------A T 01790 PRINT"CONGRATULATIONS---YOU CAME OUT EVEN, NOT BAD FOR AN AMATEUR"
    0x62141fbd1940 ---------A T 01800 END
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
int    E_int;                                     // Basic: E 
int    F_int;                                     // Basic: F 
int    H_int;                                     // Basic: H 
int    M_int;                                     // Basic: M 
int    O_int;                                     // Basic: O 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    T_int;                                     // Basic: T 
int    X_int;                                     // Basic: X 
int    Z_int;                                     // Basic: Z 
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
