/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/hilo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x632a1a07aac0 ---------A   00010 PRINT TAB(34);"HI LO"
    0x632a1a07be10 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x632a1a07bf90 ---------A   00030 PRINT:PRINT:PRINT
    0x632a1a07b4c0 ---------A   00100 PRINT "THIS IS THE GAME OF HI LO.":PRINT
    0x632a1a079f80 ---------A   00110 PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x632a1a07a3c0 ---------A   00120 PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x632a1a079b20 ---------A   00130 PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x632a1a07c070 ---------A   00140 PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x632a1a07a670 ---------A   00150 PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS.":PRINT
    0x632a1a079fd0 ---------A   00160 R=0
    0x632a1a081a70 ---------A T 00170 B=0:PRINT
    0x632a1a082060 ---------A   00180 Y=INT(100*RND(1)+1)
    0x632a1a0821d0 ---------A T 00200 PRINT "YOUR GUESS";
    0x632a1a079610 ---------A   00210 INPUT A
    0x632a1a0826c0 ---------A   00220 B=B+1
    0x632a1a0795b0 ---------A   00230 IF A=Y THEN 300
    0x632a1a082b70 ---------A   00240 IF A>Y THEN 270
    0x632a1a082ce0 ---------A   00250 PRINT "YOUR GUESS IS TOO LOW.":GOTO 280
    0x632a1a082de0 ---------A T 00270 PRINT "YOUR GUESS IS TOO HIGH."
    0x632a1a0830a0 ---------A T 00280 PRINT:IF B<6 THEN 200
    0x632a1a083320 ---------A   00290 PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x632a1a0835a0 ---------A   00295 R=0:GOTO 350
    0x632a1a0838c0 ---------A T 00300 PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x632a1a083c30 ---------A   00310 R=R+Y
    0x632a1a083f80 ---------A   00320 PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x632a1a084160 ---------A T 00350 PRINT:PRINT "PLAY AGAIN (YES OR NO)";
    0x632a1a084600 ---------A   00360 INPUT A$:IF A$="YES" THEN 170
    0x632a1a0847d0 ---------A   00380 PRINT:PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x632a1a084820 ---------A   00390 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00170      00360T
     00200      00280T
     00270      00240T
     00280      00250T
     00300      00230T
     00350      00295T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x632a1a07aac0 (00010)   0x000000000000 (00000)   0x632a1a084820 (00390)   0x632a1a084820 (00390)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01290 - 10000    8720 

 */



/*
 *  Symbol Table Listing for 'basic/hilo.bas'
 *
    A                        Float       
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
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
    Y                        Float       

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/hilo.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x632a1a07aac0 ---------A   01000 PRINT TAB(34);"HI LO"
    0x632a1a07be10 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x632a1a07bf90 ---------A   01020 PRINT:PRINT:PRINT
    0x632a1a07b4c0 ---------A   01030 PRINT "THIS IS THE GAME OF HI LO.":PRINT
    0x632a1a079f80 ---------A   01040 PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x632a1a07a3c0 ---------A   01050 PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x632a1a079b20 ---------A   01060 PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x632a1a07c070 ---------A   01070 PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x632a1a07a670 ---------A   01080 PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS.":PRINT
    0x632a1a079fd0 ---------A   01090 R=0
    0x632a1a081a70 ---------A T 01100 B=0:PRINT
    0x632a1a082060 ---------A   01110 Y=INT(100*RND(1)+1)
    0x632a1a0821d0 ---------A T 01120 PRINT "YOUR GUESS";
    0x632a1a079610 ---------A   01130 INPUT A
    0x632a1a0826c0 ---------A   01140 B=B+1
    0x632a1a0795b0 ---------A   01150 IF A=Y THEN 1220
    0x632a1a082b70 ---------A   01160 IF A>Y THEN 1180
    0x632a1a082ce0 ---------A   01170 PRINT "YOUR GUESS IS TOO LOW.":GOTO 1190
    0x632a1a082de0 ---------A T 01180 PRINT "YOUR GUESS IS TOO HIGH."
    0x632a1a0830a0 ---------A T 01190 PRINT:IF B<6 THEN 1120
    0x632a1a083320 ---------A   01200 PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x632a1a0835a0 ---------A   01210 R=0:GOTO 1250
    0x632a1a0838c0 ---------A T 01220 PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x632a1a083c30 ---------A   01230 R=R+Y
    0x632a1a083f80 ---------A   01240 PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x632a1a084160 ---------A T 01250 PRINT:PRINT "PLAY AGAIN (YES OR NO)";
    0x632a1a084600 ---------A   01260 INPUT A$:IF A$="YES" THEN 1100
    0x632a1a0847d0 ---------A   01270 PRINT:PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x632a1a084820 ---------A   01280 END
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
float  A_flt;                                     // Basic: A 
char*  A_str;                                     // Basic: A$ 
float  B_flt;                                     // Basic: B 
float  R_flt;                                     // Basic: R 
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
