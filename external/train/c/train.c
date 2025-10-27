/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/train.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x589620bf3b80 ---------A   00001 PRINT TAB(33);"TRAIN"
    0x589620bf4ed0 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x589620bf5050 ---------A   00003 PRINT: PRINT: PRINT
    0x589620bf4580 ---------A   00004 PRINT "TIME - SPEED DISTANCE EXERCISE": PRINT
    0x589620bf2be0 ---------A T 00010 C=INT(25*RND(1))+40
    0x589620bfa9c0 ---------A   00015 D=INT(15*RND(1))+5
    0x589620bfb040 ---------A   00020 T=INT(19*RND(1))+20
    0x589620bfb3a0 ---------A   00025 PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    0x589620bfb7f0 ---------A   00030 PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    0x589620bf2c30 ---------A   00035 PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    0x589620bf26d0 ---------A   00040 INPUT A
    0x589620bfc120 ---------A   00045 V=D*T/(C-T)
    0x589620bfca50 ---------A   00050 E=INT(ABS((V-A)*100/A)+.5)
    0x589620bf2670 ---------A   00055 IF E>5 THEN 70
    0x589620bfcfc0 ---------A   00060 PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    0x589620bfd050 ---------A   00065 GOTO 80
    0x589620bfd350 ---------A T 00070 PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    0x589620bfd6a0 ---------A T 00080 PRINT "CORRECT ANSWER IS";V;"HOURS."
    0x589620bfd720 ---------A   00090 PRINT
    0x589620bfd8a0 ---------A   00095 PRINT "ANOTHER PROBLEM (YES OR NO)";
    0x589620bfdab0 ---------A   00100 INPUT A$
    0x589620bfdb30 ---------A   00105 PRINT
    0x589620bfdda0 ---------A   00110 IF A$="YES" THEN 10
    0x589620bfde00 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00010      00110T
     00070      00055T
     00080      00065T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x589620bf3b80 (00001)   0x589620bf3b80 (00001)   0x589620bfde00 (00999)   0x589620bfde00 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01240 - 10000    8770 

 */



/*
 *  Symbol Table Listing for 'basic/train.bas'
 *
    A                        Integer     
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
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
    E                        Integer     
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
    V                        Integer     
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/train.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x589620bf3b80 ---------A   01000 PRINT TAB(33);"TRAIN"
    0x589620bf4ed0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x589620bf5050 ---------A   01020 PRINT: PRINT: PRINT
    0x589620bf4580 ---------A   01030 PRINT "TIME - SPEED DISTANCE EXERCISE": PRINT
    0x589620bf2be0 ---------A T 01040 C=INT(25*RND(1))+40
    0x589620bfa9c0 ---------A   01050 D=INT(1050*RND(1))+5
    0x589620bfb040 ---------A   01060 T=INT(19*RND(1))+1060
    0x589620bfb3a0 ---------A   01070 PRINT " A CAR TRAVELING";C;"MPH CAN MAKE A CERTAIN TRIP IN"
    0x589620bfb7f0 ---------A   01080 PRINT D;"HOURS LESS THAN A TRAIN TRAVELING AT";T;"MPH."
    0x589620bf2c30 ---------A   01090 PRINT "HOW LONG DOES THE TRIP TAKE BY CAR";
    0x589620bf26d0 ---------A   01100 INPUT A
    0x589620bfc120 ---------A   01110 V=D*T/(C-T)
    0x589620bfca50 ---------A   01120 E=INT(ABS((V-A)*100/A)+.5)
    0x589620bf2670 ---------A   01130 IF E>5 THEN 1160
    0x589620bfcfc0 ---------A   01140 PRINT "GOOD! ANSWER WITHIN";E;"PERCENT."
    0x589620bfd050 ---------A   01150 GOTO 1170
    0x589620bfd350 ---------A T 01160 PRINT "SORRY.  YOU WERE OFF BY";E;"PERCENT."
    0x589620bfd6a0 ---------A T 01170 PRINT "CORRECT ANSWER IS";V;"HOURS."
    0x589620bfd720 ---------A   01180 PRINT
    0x589620bfd8a0 ---------A   01190 PRINT "ANOTHER PROBLEM (YES OR NO)";
    0x589620bfdab0 ---------A   01200 INPUT A$
    0x589620bfdb30 ---------A   01210 PRINT
    0x589620bfdda0 ---------A   01220 IF A$="YES" THEN 1040
    0x589620bfde00 ---------A   01230 END
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
int    C_int;                                     // Basic: C 
int    D_int;                                     // Basic: D 
int    E_int;                                     // Basic: E 
int    T_int;                                     // Basic: T 
int    V_int;                                     // Basic: V 
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
