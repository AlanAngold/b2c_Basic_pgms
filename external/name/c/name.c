/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/name.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5665d15dcb80 ---------A   00001 PRINT TAB(34);"NAME"
    0x5665d15dded0 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5665d15de050 ---------A   00003 PRINT: PRINT: PRINT
    0x5665d15cc300 ---------A   00005 DIM B$(40)
    0x5665d15dbe40 ---------A   00010 PRINT "HELLO.": PRINT "MY NAME IS CREATIVE COMPUTER."
    0x5665d15dc7a0 ---------A   00020 PRINT "WHAT'S YOUR NAME (FIRST AND LAST";: INPUT A$: L=LEN(A$)
    0x5665d15e38c0 ---------A   00030 PRINT: PRINT "THANK YOU, ";
    0x5665d15e4280 ---------A   00040 FOR I=1 TO L: B$(I)=MID$(A$,I,1): NEXT I
    0x5665d15e49b0 ---------A   00050 FOR I=L TO 1 STEP -1: PRINT B$(I);: NEXT I
    0x5665d15e4c70 ---------A   00060 PRINT ".": PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
    0x5665d15e4e60 ---------A   00070 PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!": PRINT
    0x5665d15e4ff0 ---------A   00080 PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
    0x5665d15e5120 ---------A   00090 PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
    0x5665d15e5b80 ---------A   00100 FOR J=2 TO L: I=J-1: T$=B$(J)
    0x5665d15e5ef0 ---------A T 00110 IF T$>B$(I) THEN 130
    0x5665d15e6930 ---------A   00120 B$(I+1)=B$(I): I=I-1: IF I>0 THEN 110
    0x5665d15e6e60 ---------A T 00130 B$(I+1)=T$: NEXT J
    0x5665d15e75a0 ---------A   00140 FOR I=1 TO L: PRINT B$(I);: NEXT I: PRINT: PRINT
    0x5665d15e78f0 ---------A   00150 PRINT "DON'T YOU LIKE THAT BETTER";: INPUT D$
    0x5665d15e7ba0 ---------A   00160 IF D$="YES" THEN 180
    0x5665d15e7dc0 ---------A   00170 PRINT: PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY.": GOTO 200
    0x5665d15e7f70 ---------A T 00180 PRINT: PRINT "I KNEW YOU'D AGREE!!"
    0x5665d15e8330 ---------A T 00200 PRINT: PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
    0x5665d15e8480 ---------A   00210 PRINT "HAVE A NICE DAY!"
    0x5665d15e84d0 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00110      00120T
     00130      00110T
     00180      00160T
     00200      00170T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5665d15dcb80 (00001)   0x5665d15dcb80 (00001)   0x5665d15e84d0 (00999)   0x5665d15e84d0 (00999)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01250 - 10000    8760 

 */



/*
 *  Symbol Table Listing for 'basic/name.bas'
 *
    A$                       String      
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B$              Array    String          {0,39} 
    CDBL            Function Float           args=1, int    
    CHR$            Function String          args=1, int    
    CINT            Function Integer         args=1, float  
    COS             Function Float           args=1, float  
    CSNG            Function Float           args=1, int    
    CVD             Function Float           args=1, float  
    CVI             Function Integer         args=1, char*  
    CVS             Function Float           args=1, char*  
    D$                       String      
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
    J                        Integer     
    L                        Integer     
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
    T$                       String      
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
 *  Listing of basic/name.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5665d15dcb80 ---------A   01000 PRINT TAB(34);"NAME"
    0x5665d15dded0 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5665d15de050 ---------A   01020 PRINT: PRINT: PRINT
    0x5665d15cc300 ---------A   01030 DIM B$(40)
    0x5665d15dbe40 ---------A   01040 PRINT "HELLO.": PRINT "MY NAME IS CREATIVE COMPUTER."
    0x5665d15dc7a0 ---------A   01050 PRINT "WHAT'S YOUR NAME (FIRST AND LAST";: INPUT A$: L=LEN(A$)
    0x5665d15e38c0 ---------A   01060 PRINT: PRINT "THANK YOU, ";
    0x5665d15e4280 ---------A   01070 FOR I=1 TO L: B$(I)=MID$(A$,I,1): NEXT I
    0x5665d15e49b0 ---------A   01080 FOR I=L TO 1 STEP -1: PRINT B$(I);: NEXT I
    0x5665d15e4c70 ---------A   01090 PRINT ".": PRINT "OOPS!  I GUESS I GOT IT BACKWARDS.  A SMART"
    0x5665d15e4e60 ---------A   01100 PRINT "COMPUTER LIKE ME SHOULDN'T MAKE A MISTAKE LIKE THAT!": PRINT
    0x5665d15e4ff0 ---------A   01110 PRINT "BUT I JUST NOTICED YOUR LETTERS ARE OUT OF ORDER."
    0x5665d15e5120 ---------A   01120 PRINT "LET'S PUT THEM IN ORDER LIKE THIS: ";
    0x5665d15e5b80 ---------A   01130 FOR J=2 TO L: I=J-1: T$=B$(J)
    0x5665d15e5ef0 ---------A T 01140 IF T$>B$(I) THEN 1160
    0x5665d15e6930 ---------A   01150 B$(I+1)=B$(I): I=I-1: IF I>0 THEN 1140
    0x5665d15e6e60 ---------A T 01160 B$(I+1)=T$: NEXT J
    0x5665d15e75a0 ---------A   01170 FOR I=1 TO L: PRINT B$(I);: NEXT I: PRINT: PRINT
    0x5665d15e78f0 ---------A   01180 PRINT "DON'T YOU LIKE THAT BETTER";: INPUT D$
    0x5665d15e7ba0 ---------A   01190 IF D$="YES" THEN 1210
    0x5665d15e7dc0 ---------A   01200 PRINT: PRINT "I'M SORRY YOU DON'T LIKE IT THAT WAY.": GOTO 1220
    0x5665d15e7f70 ---------A T 01210 PRINT: PRINT "I KNEW YOU'D AGREE!!"
    0x5665d15e8330 ---------A T 01220 PRINT: PRINT "I REALLY ENJOYED MEETING YOU ";A$;"."
    0x5665d15e8480 ---------A   01230 PRINT "HAVE A NICE DAY!"
    0x5665d15e84d0 ---------A   01240 END
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
char*  A_str;                                     // Basic: A$ 
char*  B_str_arr[40];                             // Basic: B$ 
char*  D_str;                                     // Basic: D$ 
int    I_int;                                     // Basic: I 
int    J_int;                                     // Basic: J 
int    L_int;                                     // Basic: L 
char*  T_str;                                     // Basic: T$ 
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
