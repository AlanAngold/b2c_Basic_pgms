/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/dice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d48f24d9ac0 ---------A   00002 PRINT TAB(34);"DICE"
    0x5d48f24dae10 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d48f24daf90 ---------A   00006 PRINT:PRINT:PRINT
    0x5d48f24c92b0 ---------A   00010 DIM F(12)
    0x5d48f24da4c0 ---------A   00020 REM  DANNY FREIDUS
    0x5d48f24d8fc0 ---------A   00030 PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x5d48f24d9410 ---------A   00040 PRINT "PAIR OF DICE."
    0x5d48f24d8b70 ---------A   00050 PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x5d48f24db0b0 ---------A   00060 PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x5d48f24da0f0 ---------A   00070 PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x5d48f24d8610 ---------A T 00080 FOR Q=1 TO 12
    0x5d48f24e0b00 ---------A   00090 F(Q)=0
    0x5d48f24e0c10 ---------A   00100 NEXT Q
    0x5d48f24e0dc0 ---------A   00110 PRINT:PRINT "HOW MANY ROLLS";
    0x5d48f24d85b0 ---------A   00120 INPUT X
    0x5d48f24e1330 ---------A   00130 FOR S=1 TO X
    0x5d48f24e19d0 ---------A   00140 A=INT(6*RND(1)+1)
    0x5d48f24e2060 ---------A   00150 B=INT(6*RND(1)+1)
    0x5d48f24e2470 ---------A   00160 R=A+B
    0x5d48f24e2960 ---------A   00170 F(R)=F(R)+1
    0x5d48f24e2a90 ---------A   00180 NEXT S
    0x5d48f24e2b30 ---------A   00185 PRINT
    0x5d48f24e2d80 ---------A   00190 PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x5d48f24e3110 ---------A   00200 FOR V=2 TO 12
    0x5d48f24e3450 ---------A   00210 PRINT V,F(V)
    0x5d48f24e3580 ---------A   00220 NEXT V
    0x5d48f24e35e0 ---------A   00221 PRINT
    0x5d48f24e37a0 ---------A   00222 PRINT:PRINT "TRY AGAIN";
    0x5d48f24e39b0 ---------A   00223 INPUT Z$
    0x5d48f24e3c30 ---------A   00224 IF Z$="YES" THEN 80
    0x5d48f24e3c90 ---------A   00240 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00080      00224T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5d48f24d9ac0 (00002)   0x000000000000 (00000)   0x5d48f24e3c90 (00240)   0x5d48f24e3c90 (00240)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01310 - 10000    8700 

 */



/*
 *  Symbol Table Listing for 'basic/dice.bas'
 *
    A                        Float       
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
    F               Array    Float           {0,11} 
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
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Float       
    Z$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/dice.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5d48f24d9ac0 ---------A   01000 PRINT TAB(34);"DICE"
    0x5d48f24dae10 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5d48f24daf90 ---------A   01020 PRINT:PRINT:PRINT
    0x5d48f24c92b0 ---------A   01030 DIM F(12)
    0x5d48f24da4c0 ---------A   01040 REM  DANNY FREIDUS
    0x5d48f24d8fc0 ---------A   01050 PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x5d48f24d9410 ---------A   01060 PRINT "PAIR OF DICE."
    0x5d48f24d8b70 ---------A   01070 PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x5d48f24db0b0 ---------A   01080 PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x5d48f24da0f0 ---------A   01090 PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x5d48f24d8610 ---------A T 01100 FOR Q=1 TO 12
    0x5d48f24e0b00 ---------A   01110 F(Q)=0
    0x5d48f24e0c10 ---------A   01120 NEXT Q
    0x5d48f24e0dc0 ---------A   01130 PRINT:PRINT "HOW MANY ROLLS";
    0x5d48f24d85b0 ---------A   01140 INPUT X
    0x5d48f24e1330 ---------A   01150 FOR S=1 TO X
    0x5d48f24e19d0 ---------A   01160 A=INT(6*RND(1)+1)
    0x5d48f24e2060 ---------A   01170 B=INT(6*RND(1)+1)
    0x5d48f24e2470 ---------A   01180 R=A+B
    0x5d48f24e2960 ---------A   01190 F(R)=F(R)+1
    0x5d48f24e2a90 ---------A   01200 NEXT S
    0x5d48f24e2b30 ---------A   01210 PRINT
    0x5d48f24e2d80 ---------A   01220 PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x5d48f24e3110 ---------A   01230 FOR V=2 TO 12
    0x5d48f24e3450 ---------A   01240 PRINT V,F(V)
    0x5d48f24e3580 ---------A   01250 NEXT V
    0x5d48f24e35e0 ---------A   01260 PRINT
    0x5d48f24e37a0 ---------A   01270 PRINT:PRINT "TRY AGAIN";
    0x5d48f24e39b0 ---------A   01280 INPUT Z$
    0x5d48f24e3c30 ---------A   01290 IF Z$="YES" THEN 1100
    0x5d48f24e3c90 ---------A   01300 END
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
float  B_flt;                                     // Basic: B 
float  F_flt_arr[12];                             // Basic: F 
float  Q_flt;                                     // Basic: Q 
float  R_flt;                                     // Basic: R 
float  S_flt;                                     // Basic: S 
float  V_flt;                                     // Basic: V 
float  X_flt;                                     // Basic: X 
char*  Z_str;                                     // Basic: Z$ 
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
