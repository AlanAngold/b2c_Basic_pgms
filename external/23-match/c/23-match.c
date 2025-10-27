/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/23-match.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62a5c19efb80 ---------A   00020 PRINT TAB(31);"23 MATCHES"
    0x62a5c19f0f30 ---------A   00030 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62a5c19f10b0 ---------A   00040 PRINT:PRINT:PRINT
    0x62a5c19ee9e0 ---------A   00080 PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    0x62a5c19f0aa0 ---------A   00090 PRINT
    0x62a5c19ef090 ---------A   00100 PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    0x62a5c19ef480 ---------A   00110 PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    0x62a5c19f06e0 ---------A   00120 PRINT "THE LAST MATCH."
    0x62a5c19eebe0 ---------A   00130 PRINT
    0x62a5c19f0af0 ---------A   00140 PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    0x62a5c19ef620 ---------A   00150 PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    0x62a5c19ef690 ---------A   00155 PRINT
    0x62a5c19ef700 ---------A   00160 REM
    0x62a5c19f6980 ---------A   00165 N = 23
    0x62a5c19f6e70 ---------A   00170 Q = INT(2*RND(5))
    0x62a5c19ee6d0 ---------A   00180 IF Q = 1 THEN 210
    0x62a5c19f7140 ---------A   00190 PRINT "TAILS! YOU GO FIRST. "
    0x62a5c19f71b0 ---------A   00195 PRINT
    0x62a5c19f7200 ---------A   00200 GOTO 300
    0x62a5c19f7360 ---------A T 00210 PRINT "HEADS! I WIN! HA! HA!"
    0x62a5c19f7490 ---------A   00220 PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    0x62a5c19f74e0 ---------A   00230 PRINT
    0x62a5c19f7630 ---------A   00250 PRINT "I TAKE 2 MATCHES"
    0x62a5c19f7980 ---------A   00260 N = N -2
    0x62a5c19f7bb0 ---------A T 00270 PRINT "THE NUMBER OF MATCHES IS NOW" N
    0x62a5c19f7c50 ---------A   00280 PRINT
    0x62a5c19f7de0 ---------A   00290 PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    0x62a5c19f7f30 ---------A T 00300 PRINT "HOW MANY DO YOU WISH TO REMOVE",
    0x62a5c19ee670 ---------A T 00310 INPUT K
    0x62a5c19f8340 ---------A   00320 IF K > 3 THEN 430
    0x62a5c19f85a0 ---------A   00330 IF K <= 0 THEN 430
    0x62a5c19f8920 ---------A   00340 N = N - K
    0x62a5c19f8c70 ---------A   00350 PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    0x62a5c19f90d0 ---------A   00351 IF N = 4 THEN 381
    0x62a5c19f9330 ---------A   00352 IF N = 3 THEN 383
    0x62a5c19f9590 ---------A   00353 IF N = 2 THEN 385
    0x62a5c19f97f0 ---------A   00360 IF N <= 1 THEN  530
    0x62a5c19f9bf0 ---------A   00370 Z = 4 - K
    0x62a5c19f9c60 ---------A   00372 GOTO 390
    0x62a5c19f9cc0 ----------   00380 PRINT
    0x62a5c19f9ed0 ---------A T 00381 Z = 3
    0x62a5c19f9f40 ---------A   00382 GOTO 390
    0x62a5c19fa140 ---------A T 00383 Z = 2
    0x62a5c19fa1b0 ---------A   00384 GOTO 390
    0x62a5c19fa3d0 ---------A T 00385 Z = 1
    0x62a5c19fa720 ---------A T 00390 PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    0x62a5c19faa70 ---------A   00400 N = N - Z
    0x62a5c19facc0 ---------A   00410 IF N < = 1 THEN 470
    0x62a5c19fad50 ---------A   00420 GOTO 270
    0x62a5c19faeb0 ---------A T 00430 PRINT "VERY FUNNY! DUMMY!"
    0x62a5c19fb030 ---------A   00440 PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    0x62a5c19fb1b0 ---------A   00450 PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    0x62a5c19fb220 ---------A   00460 GOTO 310
    0x62a5c19fb2b0 ---------A T 00470 PRINT
    0x62a5c19fb430 ---------A   00480 PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    0x62a5c19fb590 ---------A   00490 PRINT "HA ! HA ! I BEAT YOU !!!"
    0x62a5c19fb610 ---------A   00500 PRINT
    0x62a5c19fb760 ---------A   00510 PRINT "GOOD BYE LOSER!"
    0x62a5c19fb7e0 ---------A   00520 GOTO 560
    0x62a5c19fb940 ---------A T 00530 PRINT "YOU WON, FLOPPY EARS !"
    0x62a5c19fbad0 ---------A   00540 PRINT "THINK YOU'RE PRETTY SMART !"
    0x62a5c19fbc40 ---------A   00550 PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    0x62a5c19fbc90 ---------A T 00560 STOP
    0x62a5c19fbcf0 ---------A   00570 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00210      00180T
     00270      00420T
     00300      00200T
     00310      00460T
     00381      00351T
     00383      00352T
     00385      00353T
     00390      00372T, 00382T, 00384T
     00430      00320T, 00330T
     00470      00410T
     00530      00360T
     00560      00520T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x62a5c19efb80 (00020)   0x62a5c19efb80 (00020)   0x62a5c19fbcf0 (00570)   0x62a5c19fbcf0 (00570)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01630 - 10000    8380 

 */



/*
 *  Symbol Table Listing for 'basic/23-match.bas'
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
    K                        Integer     
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
    N                        Integer     
    OCT$            Function String          args=1, float  
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    Q                        Integer     
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
    Z                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/23-match.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62a5c19efb80 ---------A   01000 PRINT TAB(31);"23 MATCHES"
    0x62a5c19f0f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62a5c19f10b0 ---------A   01020 PRINT:PRINT:PRINT
    0x62a5c19ee9e0 ---------A   01030 PRINT " THIS IS A GAME CALLED '23 MATCHES'."
    0x62a5c19f0aa0 ---------A   01040 PRINT
    0x62a5c19ef090 ---------A   01050 PRINT "WHEN IT IS YOUR TURN, YOU MAY TAKE ONE, TWO, OR THREE"
    0x62a5c19ef480 ---------A   01060 PRINT "MATCHES. THE OBJECT OF THE GAME IS NOT TO HAVE TO TAKE"
    0x62a5c19f06e0 ---------A   01070 PRINT "THE LAST MATCH."
    0x62a5c19eebe0 ---------A   01080 PRINT
    0x62a5c19f0af0 ---------A   01090 PRINT "LET'S FLIP A COIN TO SEE WHO GOES FIRST."
    0x62a5c19ef620 ---------A   01100 PRINT "IF IT COMES UP HEADS, I WILL WIN THE TOSS."
    0x62a5c19ef690 ---------A   01110 PRINT
    0x62a5c19ef700 ---------A   01120 REM
    0x62a5c19f6980 ---------A   01130 N = 23
    0x62a5c19f6e70 ---------A   01140 Q = INT(2*RND(5))
    0x62a5c19ee6d0 ---------A   01150 IF Q = 1 THEN 1190
    0x62a5c19f7140 ---------A   01160 PRINT "TAILS! YOU GO FIRST. "
    0x62a5c19f71b0 ---------A   01170 PRINT
    0x62a5c19f7200 ---------A   01180 GOTO 1270
    0x62a5c19f7360 ---------A T 01190 PRINT "HEADS! I WIN! HA! HA!"
    0x62a5c19f7490 ---------A   01200 PRINT "PREPARE TO LOSE, MEATBALL-NOSE!!"
    0x62a5c19f74e0 ---------A   01210 PRINT
    0x62a5c19f7630 ---------A   01220 PRINT "I TAKE 2 MATCHES"
    0x62a5c19f7980 ---------A   01230 N = N -2
    0x62a5c19f7bb0 ---------A T 01240 PRINT "THE NUMBER OF MATCHES IS NOW" N
    0x62a5c19f7c50 ---------A   01250 PRINT
    0x62a5c19f7de0 ---------A   01260 PRINT "YOUR TURN -- YOU MAY TAKE 1, 2 OR 3 MATCHES."
    0x62a5c19f7f30 ---------A T 01270 PRINT "HOW MANY DO YOU WISH TO REMOVE",
    0x62a5c19ee670 ---------A T 01280 INPUT K
    0x62a5c19f8340 ---------A   01290 IF K > 3 THEN 1480
    0x62a5c19f85a0 ---------A   01300 IF K <= 0 THEN 1480
    0x62a5c19f8920 ---------A   01310 N = N - K
    0x62a5c19f8c70 ---------A   01320 PRINT "THERE ARE NOW";N;"MATCHES REMAINING."
    0x62a5c19f90d0 ---------A   01330 IF N = 4 THEN 1390
    0x62a5c19f9330 ---------A   01340 IF N = 3 THEN 1410
    0x62a5c19f9590 ---------A   01350 IF N = 2 THEN 1430
    0x62a5c19f97f0 ---------A   01360 IF N <= 1 THEN  1580
    0x62a5c19f9bf0 ---------A   01370 Z = 4 - K
    0x62a5c19f9c60 ---------A   01380 GOTO 1440
    0x62a5c19f9ed0 ---------A T 01390 Z = 3
    0x62a5c19f9f40 ---------A   01400 GOTO 1440
    0x62a5c19fa140 ---------A T 01410 Z = 2
    0x62a5c19fa1b0 ---------A   01420 GOTO 1440
    0x62a5c19fa3d0 ---------A T 01430 Z = 1
    0x62a5c19fa720 ---------A T 01440 PRINT "MY TURN ! I REMOVE" Z "MATCHES"
    0x62a5c19faa70 ---------A   01450 N = N - Z
    0x62a5c19facc0 ---------A   01460 IF N < = 1 THEN 1520
    0x62a5c19fad50 ---------A   01470 GOTO 1240
    0x62a5c19faeb0 ---------A T 01480 PRINT "VERY FUNNY! DUMMY!"
    0x62a5c19fb030 ---------A   01490 PRINT "DO YOU WANT TO PLAY OR GOOF AROUND?"
    0x62a5c19fb1b0 ---------A   01500 PRINT "NOW, HOW MANY MATCHES DO YOU WANT",
    0x62a5c19fb220 ---------A   01510 GOTO 1280
    0x62a5c19fb2b0 ---------A T 01520 PRINT
    0x62a5c19fb430 ---------A   01530 PRINT"YOU POOR BOOB! YOU TOOK THE LAST MATCH! I GOTCHA!!"
    0x62a5c19fb590 ---------A   01540 PRINT "HA ! HA ! I BEAT YOU !!!"
    0x62a5c19fb610 ---------A   01550 PRINT
    0x62a5c19fb760 ---------A   01560 PRINT "GOOD BYE LOSER!"
    0x62a5c19fb7e0 ---------A   01570 GOTO 1610
    0x62a5c19fb940 ---------A T 01580 PRINT "YOU WON, FLOPPY EARS !"
    0x62a5c19fbad0 ---------A   01590 PRINT "THINK YOU'RE PRETTY SMART !"
    0x62a5c19fbc40 ---------A   01600 PRINT "LETS PLAY AGAIN AND I'LL BLOW YOUR SHOES OFF !!"
    0x62a5c19fbc90 ---------A T 01610 STOP
    0x62a5c19fbcf0 ---------A   01620 END
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
int    K_int;                                     // Basic: K 
int    N_int;                                     // Basic: N 
int    Q_int;                                     // Basic: Q 
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
