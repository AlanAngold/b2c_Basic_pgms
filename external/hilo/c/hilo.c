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
    0x5ec862ed5b80 ---------A   00010 PRINT TAB(34);"HI LO"
    0x5ec862ed6ed0 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ec862ed7050 ---------A   00030 PRINT:PRINT:PRINT
    0x5ec862ed6580 ---------A   00100 PRINT "THIS IS THE GAME OF HI LO.":PRINT
    0x5ec862ed5040 ---------A   00110 PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x5ec862ed5480 ---------A   00120 PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x5ec862ed4be0 ---------A   00130 PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x5ec862ed7130 ---------A   00140 PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x5ec862ed5730 ---------A   00150 PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS.":PRINT
    0x5ec862ed5090 ---------A   00160 R=0
    0x5ec862edcb30 ---------A T 00170 B=0:PRINT
    0x5ec862edd120 ---------A   00180 Y=INT(100*RND(1)+1)
    0x5ec862edd290 ---------A T 00200 PRINT "YOUR GUESS";
    0x5ec862ed46d0 ---------A   00210 INPUT A
    0x5ec862edd780 ---------A   00220 B=B+1
    0x5ec862ed4670 ---------A   00230 IF A=Y THEN 300
    0x5ec862eddc30 ---------A   00240 IF A>Y THEN 270
    0x5ec862eddda0 ---------A   00250 PRINT "YOUR GUESS IS TOO LOW.":GOTO 280
    0x5ec862eddea0 ---------A T 00270 PRINT "YOUR GUESS IS TOO HIGH."
    0x5ec862ede160 ---------A T 00280 PRINT:IF B<6 THEN 200
    0x5ec862ede3e0 ---------A   00290 PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x5ec862ede660 ---------A   00295 R=0:GOTO 350
    0x5ec862ede980 ---------A T 00300 PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x5ec862edecf0 ---------A   00310 R=R+Y
    0x5ec862edf040 ---------A   00320 PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x5ec862edf220 ---------A T 00350 PRINT:PRINT "PLAY AGAIN (YES OR NO)";
    0x5ec862edf6c0 ---------A   00360 INPUT A$:IF A$="YES" THEN 170
    0x5ec862edf890 ---------A   00380 PRINT:PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x5ec862edf8e0 ---------A   00390 END
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
   A) 0x5ec862ed5b80 (00010)   0x5ec862ed5b80 (00010)   0x5ec862edf8e0 (00390)   0x5ec862edf8e0 (00390)   


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
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
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
    R                        Integer     
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
    Y                        Integer     

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
    0x5ec862ed5b80 ---------A   01000 PRINT TAB(34);"HI LO"
    0x5ec862ed6ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ec862ed7050 ---------A   01020 PRINT:PRINT:PRINT
    0x5ec862ed6580 ---------A   01030 PRINT "THIS IS THE GAME OF HI LO.":PRINT
    0x5ec862ed5040 ---------A   01040 PRINT "YOU WILL HAVE 6 TRIES TO GUESS THE AMOUNT OF MONEY IN THE"
    0x5ec862ed5480 ---------A   01050 PRINT "HI LO JACKPOT, WHICH IS BETWEEN 1 AND 100 DOLLARS.  IF YOU"
    0x5ec862ed4be0 ---------A   01060 PRINT "GUESS THE AMOUNT, YOU WIN ALL THE MONEY IN THE JACKPOT!"
    0x5ec862ed7130 ---------A   01070 PRINT "THEN YOU GET ANOTHER CHANCE TO WIN MORE MONEY.  HOWEVER,"
    0x5ec862ed5730 ---------A   01080 PRINT "IF YOU DO NOT GUESS THE AMOUNT, THE GAME ENDS.":PRINT
    0x5ec862ed5090 ---------A   01090 R=0
    0x5ec862edcb30 ---------A T 01100 B=0:PRINT
    0x5ec862edd120 ---------A   01110 Y=INT(100*RND(1)+1)
    0x5ec862edd290 ---------A T 01120 PRINT "YOUR GUESS";
    0x5ec862ed46d0 ---------A   01130 INPUT A
    0x5ec862edd780 ---------A   01140 B=B+1
    0x5ec862ed4670 ---------A   01150 IF A=Y THEN 1220
    0x5ec862eddc30 ---------A   01160 IF A>Y THEN 1180
    0x5ec862eddda0 ---------A   01170 PRINT "YOUR GUESS IS TOO LOW.":GOTO 1190
    0x5ec862eddea0 ---------A T 01180 PRINT "YOUR GUESS IS TOO HIGH."
    0x5ec862ede160 ---------A T 01190 PRINT:IF B<6 THEN 1120
    0x5ec862ede3e0 ---------A   01200 PRINT "YOU BLEW IT...TOO BAD...THE NUMBER WAS";Y
    0x5ec862ede660 ---------A   01210 R=0:GOTO 1250
    0x5ec862ede980 ---------A T 01220 PRINT "GOT IT!!!!!!!!!!   YOU WIN";Y;"DOLLARS."
    0x5ec862edecf0 ---------A   01230 R=R+Y
    0x5ec862edf040 ---------A   01240 PRINT "YOUR TOTAL WINNINGS ARE NOW";R;"DOLLARS."
    0x5ec862edf220 ---------A T 01250 PRINT:PRINT "PLAY AGAIN (YES OR NO)";
    0x5ec862edf6c0 ---------A   01260 INPUT A$:IF A$="YES" THEN 1100
    0x5ec862edf890 ---------A   01270 PRINT:PRINT "SO LONG.  HOPE YOU ENJOYED YOURSELF!!!"
    0x5ec862edf8e0 ---------A   01280 END
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
int    B_int;                                     // Basic: B 
int    R_int;                                     // Basic: R 
int    Y_int;                                     // Basic: Y 
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
