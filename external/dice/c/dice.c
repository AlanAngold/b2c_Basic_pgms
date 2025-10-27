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
    0x5ac7fbcafb80 ---------A   00002 PRINT TAB(34);"DICE"
    0x5ac7fbcb0ed0 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ac7fbcb1050 ---------A   00006 PRINT:PRINT:PRINT
    0x5ac7fbc9f2b0 ---------A   00010 DIM F(12)
    0x5ac7fbcb0580 ---------A   00020 REM  DANNY FREIDUS
    0x5ac7fbcaf080 ---------A   00030 PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x5ac7fbcaf4d0 ---------A   00040 PRINT "PAIR OF DICE."
    0x5ac7fbcaec30 ---------A   00050 PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x5ac7fbcb1170 ---------A   00060 PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x5ac7fbcb01b0 ---------A   00070 PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x5ac7fbcae6d0 ---------A T 00080 FOR Q=1 TO 12
    0x5ac7fbcb6bc0 ---------A   00090 F(Q)=0
    0x5ac7fbcb6cd0 ---------A   00100 NEXT Q
    0x5ac7fbcb6e80 ---------A   00110 PRINT:PRINT "HOW MANY ROLLS";
    0x5ac7fbcae670 ---------A   00120 INPUT X
    0x5ac7fbcb73f0 ---------A   00130 FOR S=1 TO X
    0x5ac7fbcb7a90 ---------A   00140 A=INT(6*RND(1)+1)
    0x5ac7fbcb8120 ---------A   00150 B=INT(6*RND(1)+1)
    0x5ac7fbcb8530 ---------A   00160 R=A+B
    0x5ac7fbcb8a20 ---------A   00170 F(R)=F(R)+1
    0x5ac7fbcb8b50 ---------A   00180 NEXT S
    0x5ac7fbcb8bf0 ---------A   00185 PRINT
    0x5ac7fbcb8e40 ---------A   00190 PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x5ac7fbcb91d0 ---------A   00200 FOR V=2 TO 12
    0x5ac7fbcb9510 ---------A   00210 PRINT V,F(V)
    0x5ac7fbcb9640 ---------A   00220 NEXT V
    0x5ac7fbcb96a0 ---------A   00221 PRINT
    0x5ac7fbcb9860 ---------A   00222 PRINT:PRINT "TRY AGAIN";
    0x5ac7fbcb9a70 ---------A   00223 INPUT Z$
    0x5ac7fbcb9cf0 ---------A   00224 IF Z$="YES" THEN 80
    0x5ac7fbcb9d50 ---------A   00240 END
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
   A) 0x5ac7fbcafb80 (00002)   0x5ac7fbcafb80 (00002)   0x5ac7fbcb9d50 (00240)   0x5ac7fbcb9d50 (00240)   


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
    F               Array    Integer         {0,11} 
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
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    X                        Integer     
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
    0x5ac7fbcafb80 ---------A   01000 PRINT TAB(34);"DICE"
    0x5ac7fbcb0ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5ac7fbcb1050 ---------A   01020 PRINT:PRINT:PRINT
    0x5ac7fbc9f2b0 ---------A   01030 DIM F(12)
    0x5ac7fbcb0580 ---------A   01040 REM  DANNY FREIDUS
    0x5ac7fbcaf080 ---------A   01050 PRINT "THIS PROGRAM SIMULATES THE ROLLING OF A"
    0x5ac7fbcaf4d0 ---------A   01060 PRINT "PAIR OF DICE."
    0x5ac7fbcaec30 ---------A   01070 PRINT "YOU ENTER THE NUMBER OF TIMES YOU WANT THE COMPUTER TO"
    0x5ac7fbcb1170 ---------A   01080 PRINT "'ROLL' THE DICE.  WATCH OUT, VERY LARGE NUMBERS TAKE"
    0x5ac7fbcb01b0 ---------A   01090 PRINT "A LONG TIME.  IN PARTICULAR, NUMBERS OVER 5000."
    0x5ac7fbcae6d0 ---------A T 01100 FOR Q=1 TO 12
    0x5ac7fbcb6bc0 ---------A   01110 F(Q)=0
    0x5ac7fbcb6cd0 ---------A   01120 NEXT Q
    0x5ac7fbcb6e80 ---------A   01130 PRINT:PRINT "HOW MANY ROLLS";
    0x5ac7fbcae670 ---------A   01140 INPUT X
    0x5ac7fbcb73f0 ---------A   01150 FOR S=1 TO X
    0x5ac7fbcb7a90 ---------A   01160 A=INT(6*RND(1)+1)
    0x5ac7fbcb8120 ---------A   01170 B=INT(6*RND(1)+1)
    0x5ac7fbcb8530 ---------A   01180 R=A+B
    0x5ac7fbcb8a20 ---------A   01190 F(R)=F(R)+1
    0x5ac7fbcb8b50 ---------A   01200 NEXT S
    0x5ac7fbcb8bf0 ---------A   01210 PRINT
    0x5ac7fbcb8e40 ---------A   01220 PRINT "TOTAL SPOTS","NUMBER OF TIMES"
    0x5ac7fbcb91d0 ---------A   01230 FOR V=2 TO 12
    0x5ac7fbcb9510 ---------A   01240 PRINT V,F(V)
    0x5ac7fbcb9640 ---------A   01250 NEXT V
    0x5ac7fbcb96a0 ---------A   01260 PRINT
    0x5ac7fbcb9860 ---------A   01270 PRINT:PRINT "TRY AGAIN";
    0x5ac7fbcb9a70 ---------A   01280 INPUT Z$
    0x5ac7fbcb9cf0 ---------A   01290 IF Z$="YES" THEN 1100
    0x5ac7fbcb9d50 ---------A   01300 END
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
int    F_int_arr[12];                             // Basic: F 
int    Q_int;                                     // Basic: Q 
int    R_int;                                     // Basic: R 
int    S_int;                                     // Basic: S 
int    V_int;                                     // Basic: V 
int    X_int;                                     // Basic: X 
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
