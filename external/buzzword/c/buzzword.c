/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/buzzword.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bf8bdc68ac0 ---------A   00010 PRINT TAB(26);"BUZZWORD GENERATOR"
    0x5bf8bdc69e70 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bf8bdc582b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5bf8bdc67730 ---------A   00040 PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    0x5bf8bdc67f80 ---------A   00050 PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    0x5bf8bdc68410 ---------A   00060 PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    0x5bf8bdc67b20 ---------A   00070 PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    0x5bf8bdc6a100 ---------A   00080 PRINT:PRINT:PRINT "HERE'S THE FIRST PHRASE:"
    0x5bf8bdc68720 ---------A   00090 DIM A$(40)
    0x5bf8bdc6fcc0 ---------A   00100 FOR I=1 TO 39 : READ A$(I) : NEXT I
    0x5bf8bdc67fd0 ---------A T 00110 PRINT A$(INT(13*RND(1)+1));" ";
    0x5bf8bdc70900 ---------A   00120 PRINT A$(INT(13*RND(1)+14));" ";
    0x5bf8bdc70f60 ---------A   00130 PRINT A$(INT(13*RND(1)+27)) : PRINT
    0x5bf8bdc713e0 ---------A   00150 INPUT Y$ : IF Y$="Y" THEN 110 ELSE GOTO 999
    0x5bf8bdc71810 ---------A   00200 DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
    0x5bf8bdc71c30 ---------A   00210 DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
    0x5bf8bdc72050 ---------A   00220 DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
    0x5bf8bdc72470 ---------A   00230 DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
    0x5bf8bdc72890 ---------A   00240 DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
    0x5bf8bdc72cb0 ---------A   00250 DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
    0x5bf8bdc730d0 ---------A   00260 DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
    0x5bf8bdc734f0 ---------A   00270 DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
    0x5bf8bdc73900 ---------A   00280 DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
    0x5bf8bdc73c40 ---------A   00290 DATA "STRUCTURE","FACILITY","ENVIRONMENT"
    0x5bf8bdc73de0 ---------A   00999 PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!":END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00110      00150T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5bf8bdc68ac0 (00010)   0x000000000000 (00000)   0x5bf8bdc73de0 (00999)   0x5bf8bdc73de0 (00999)   


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
 *  Symbol Table Listing for 'basic/buzzword.bas'
 *
    A$              Array    String          {0,39} 
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
    I                        Float       
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
    Y$                       String      

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/buzzword.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bf8bdc68ac0 ---------A   01000 PRINT TAB(26);"BUZZWORD GENERATOR"
    0x5bf8bdc69e70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bf8bdc582b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5bf8bdc67730 ---------A   01030 PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    0x5bf8bdc67f80 ---------A   01040 PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    0x5bf8bdc68410 ---------A   01050 PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    0x5bf8bdc67b20 ---------A   01060 PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    0x5bf8bdc6a100 ---------A   01070 PRINT:PRINT:PRINT "HERE'S THE FIRST PHRASE:"
    0x5bf8bdc68720 ---------A   01080 DIM A$(40)
    0x5bf8bdc6fcc0 ---------A   01090 FOR I=1 TO 39 : READ A$(I) : NEXT I
    0x5bf8bdc67fd0 ---------A T 01100 PRINT A$(INT(13*RND(1)+1));" ";
    0x5bf8bdc70900 ---------A   01110 PRINT A$(INT(13*RND(1)+14));" ";
    0x5bf8bdc70f60 ---------A   01120 PRINT A$(INT(13*RND(1)+27)) : PRINT
    0x5bf8bdc713e0 ---------A   01130 INPUT Y$ : IF Y$="Y" THEN 1100 ELSE GOTO 999
    0x5bf8bdc71810 ---------A   01140 DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
    0x5bf8bdc71c30 ---------A   01150 DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
    0x5bf8bdc72050 ---------A   01160 DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
    0x5bf8bdc72470 ---------A   01170 DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
    0x5bf8bdc72890 ---------A   01180 DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
    0x5bf8bdc72cb0 ---------A   01190 DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
    0x5bf8bdc730d0 ---------A   01200 DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
    0x5bf8bdc734f0 ---------A   01210 DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
    0x5bf8bdc73900 ---------A   01220 DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
    0x5bf8bdc73c40 ---------A   01230 DATA "STRUCTURE","FACILITY","ENVIRONMENT"
    0x5bf8bdc73de0 ---------A   01240 PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!":END
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
char* data_01140s[]={"ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"};
char* data_01150s[]={"DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"};
char* data_01160s[]={"HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"};
char* data_01170s[]={"INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"};
char* data_01180s[]={"COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"};
char* data_01190s[]={"INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"};
char* data_01200s[]={"MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"};
char* data_01210s[]={"ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"};
char* data_01220s[]={"PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"};
char* data_01230s[]={"STRUCTURE","FACILITY","ENVIRONMENT"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1140,  4,data_01140s},
    { 1150,  4,data_01150s},
    { 1160,  4,data_01160s},
    { 1170,  4,data_01170s},
    { 1180,  4,data_01180s},
    { 1190,  4,data_01190s},
    { 1200,  4,data_01200s},
    { 1210,  4,data_01210s},
    { 1220,  4,data_01220s},
    { 1230,  3,data_01230s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[40];                             // Basic: A$ 
float  I_flt;                                     // Basic: I 
char*  Y_str;                                     // Basic: Y$ 
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
