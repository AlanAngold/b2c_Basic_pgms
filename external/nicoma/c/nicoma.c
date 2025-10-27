/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/nicoma.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62d5324a3b80 ---------A   00002 PRINT TAB(33);"NICOMA"
    0x62d5324a4f30 ---------A   00004 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62d5324932b0 ---------A   00006 PRINT: PRINT: PRINT
    0x62d5324a27f0 ---------A   00010 PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    0x62d5324a4aa0 ---------A T 00020 PRINT
    0x62d5324a2e40 ---------A   00030 PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    0x62d5324a3480 ---------A   00040 PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    0x62d5324a26d0 ---------A   00045 INPUT A
    0x62d5324a51c0 ---------A   00050 PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    0x62d5324a2670 ---------A   00055 INPUT B
    0x62d5324a4af0 ---------A   00060 PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    0x62d5324aa9c0 ---------A   00065 INPUT C
    0x62d5324aaa20 ---------A   00070 PRINT
    0x62d5324aab30 ---------A   00080 PRINT "LET ME THINK A MOMENT..."
    0x62d5324aab80 ---------A   00085 PRINT
    0x62d5324aafd0 ---------A   00090 FOR I=1 TO 1500: NEXT I
    0x62d5324ab7f0 ---------A   00100 D=70*A+21*B+15*C
    0x62d5324aba40 ---------A T 00110 IF D<=105 THEN 140
    0x62d5324abd80 ---------A   00120 D=D-105
    0x62d5324abe10 ---------A   00130 GOTO 110
    0x62d5324ac170 ---------A T 00140 PRINT "YOUR NUMBER WAS";D;", RIGHT";
    0x62d5324ac380 ---------A T 00160 INPUT A$
    0x62d5324ac3e0 ---------A   00165 PRINT
    0x62d5324ac650 ---------A   00170 IF A$="YES" THEN 220
    0x62d5324ac900 ---------A   00180 IF A$="NO" THEN 240
    0x62d5324acc40 ---------A   00190 PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
    0x62d5324acc90 ---------A   00200 GOTO 160
    0x62d5324acdd0 ---------A T 00220 PRINT "HOW ABOUT THAT!!"
    0x62d5324ace60 ---------A   00230 GOTO 250
    0x62d5324acf80 ---------A T 00240 PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
    0x62d5324acfd0 ---------A T 00250 PRINT
    0x62d5324ad120 ---------A   00260 PRINT "LET'S TRY ANOTHER."
    0x62d5324ad190 ---------A   00270 GOTO 20
    0x62d5324ad3e0 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00020      00270T
     00110      00130T
     00140      00110T
     00160      00200T
     00220      00170T
     00240      00180T
     00250      00230T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x62d5324a3b80 (00002)   0x62d5324a3b80 (00002)   0x62d5324ad3e0 (00999)   0x62d5324ad3e0 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01340 - 10000    8670 

 */



/*
 *  Symbol Table Listing for 'basic/nicoma.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Integer     
    C                        Integer     
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
    HEX$            Function String          args=1, int    
    I                        Integer     
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
 *  Listing of basic/nicoma.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x62d5324a3b80 ---------A   01000 PRINT TAB(33);"NICOMA"
    0x62d5324a4f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x62d5324932b0 ---------A   01020 PRINT: PRINT: PRINT
    0x62d5324a27f0 ---------A   01030 PRINT "BOOMERANG PUZZLE FROM ARITHMETICA OF NICOMACHUS -- A.D. 90!"
    0x62d5324a4aa0 ---------A T 01040 PRINT
    0x62d5324a2e40 ---------A   01050 PRINT "PLEASE THINK OF A NUMBER BETWEEN 1 AND 100."
    0x62d5324a3480 ---------A   01060 PRINT "YOUR NUMBER DIVIDED BY 3 HAS A REMAINDER OF";
    0x62d5324a26d0 ---------A   01070 INPUT A
    0x62d5324a51c0 ---------A   01080 PRINT "YOUR NUMBER DIVIDED BY 5 HAS A REMAINDER OF";
    0x62d5324a2670 ---------A   01090 INPUT B
    0x62d5324a4af0 ---------A   01100 PRINT "YOUR NUMBER DIVIDED BY 7 HAS A REMAINDER OF";
    0x62d5324aa9c0 ---------A   01110 INPUT C
    0x62d5324aaa20 ---------A   01120 PRINT
    0x62d5324aab30 ---------A   01130 PRINT "LET ME THINK A MOMENT..."
    0x62d5324aab80 ---------A   01140 PRINT
    0x62d5324aafd0 ---------A   01150 FOR I=1 TO 1500: NEXT I
    0x62d5324ab7f0 ---------A   01160 D=70*A+21*B+15*C
    0x62d5324aba40 ---------A T 01170 IF D<=105 THEN 1200
    0x62d5324abd80 ---------A   01180 D=D-105
    0x62d5324abe10 ---------A   01190 GOTO 1170
    0x62d5324ac170 ---------A T 01200 PRINT "YOUR NUMBER WAS";D;", RIGHT";
    0x62d5324ac380 ---------A T 01210 INPUT A$
    0x62d5324ac3e0 ---------A   01220 PRINT
    0x62d5324ac650 ---------A   01230 IF A$="YES" THEN 1270
    0x62d5324ac900 ---------A   01240 IF A$="NO" THEN 1290
    0x62d5324acc40 ---------A   01250 PRINT "EH?  I DON'T UNDERSTAND '";A$;"'  TRY 'YES' OR 'NO'."
    0x62d5324acc90 ---------A   01260 GOTO 1210
    0x62d5324acdd0 ---------A T 01270 PRINT "HOW ABOUT THAT!!"
    0x62d5324ace60 ---------A   01280 GOTO 1300
    0x62d5324acf80 ---------A T 01290 PRINT "I FEEL YOUR ARITHMETIC IS IN ERROR."
    0x62d5324acfd0 ---------A T 01300 PRINT
    0x62d5324ad120 ---------A   01310 PRINT "LET'S TRY ANOTHER."
    0x62d5324ad190 ---------A   01320 GOTO 1040
    0x62d5324ad3e0 ---------A   01330 END
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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    I_int;                                     // Basic: I 
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
