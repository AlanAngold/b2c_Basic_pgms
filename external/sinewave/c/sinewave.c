/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/sinewave.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b9eb4395b80 ---------A   00010 PRINT TAB(30);"SINE WAVE"
    0x5b9eb4396f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b9eb43949e0 ---------A   00030 PRINT: PRINT: PRINT: PRINT: PRINT
    0x5b9eb4385300 ---------A   00040 REM ARKABLE PROGRAM BY DAVID AHL
    0x5b9eb4394830 ---------A   00050 B=0
    0x5b9eb4395090 ---------A   00100 REM  START LONG LOOP
    0x5b9eb43946d0 ---------A   00110 FOR T=0 TO 40 STEP .25
    0x5b9eb439caa0 ---------A   00120 A=INT(26+25*SIN(T))
    0x5b9eb439cbf0 ---------A   00130 PRINT TAB(A);
    0x5b9eb4394670 ---------A   00140 IF B=1 THEN 180
    0x5b9eb4395040 ---------A   00150 PRINT "CREATIVE"
    0x5b9eb439d060 ---------A   00160 B=1
    0x5b9eb439d0d0 ---------A   00170 GOTO 200
    0x5b9eb439d210 ---------A T 00180 PRINT "COMPUTING"
    0x5b9eb439d420 ---------A   00190 B=0
    0x5b9eb439d550 ---------A T 00200 NEXT T
    0x5b9eb439d5b0 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00180      00140T
     00200      00170T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5b9eb4395b80 (00010)   0x5b9eb4395b80 (00010)   0x5b9eb439d5b0 (00999)   0x5b9eb439d5b0 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01170 - 10000    8840 

 */



/*
 *  Symbol Table Listing for 'basic/sinewave.bas'
 *
    A                        Integer     
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/sinewave.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5b9eb4395b80 ---------A   01000 PRINT TAB(30);"SINE WAVE"
    0x5b9eb4396f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b9eb43949e0 ---------A   01020 PRINT: PRINT: PRINT: PRINT: PRINT
    0x5b9eb4385300 ---------A   01030 REM ARKABLE PROGRAM BY DAVID AHL
    0x5b9eb4394830 ---------A   01040 B=0
    0x5b9eb4395090 ---------A   01050 REM  START LONG LOOP
    0x5b9eb43946d0 ---------A   01060 FOR T=0 TO 40 STEP .25
    0x5b9eb439caa0 ---------A   01070 A=INT(26+25*SIN(T))
    0x5b9eb439cbf0 ---------A   01080 PRINT TAB(A);
    0x5b9eb4394670 ---------A   01090 IF B=1 THEN 1130
    0x5b9eb4395040 ---------A   01100 PRINT "CREATIVE"
    0x5b9eb439d060 ---------A   01110 B=1
    0x5b9eb439d0d0 ---------A   01120 GOTO 1150
    0x5b9eb439d210 ---------A T 01130 PRINT "COMPUTING"
    0x5b9eb439d420 ---------A   01140 B=0
    0x5b9eb439d550 ---------A T 01150 NEXT T
    0x5b9eb439d5b0 ---------A   01160 END
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
int    B_int;                                     // Basic: B 
int    T_int;                                     // Basic: T 
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
