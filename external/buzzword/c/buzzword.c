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
    0x6197e8a1b6d0 ---------A   00010  PRINT TAB(26);"BUZZWORD GENERATOR"
    0x6197e8a1b670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6197e8a1b7f0 ---------A   00030  PRINT:PRINT:PRINT
    0x6197e8a1c040 ---------A   00040  PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    0x6197e8a1be40 ---------A   00050  PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    0x6197e8a1c4c0 ---------A   00060  PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    0x6197e8a1bc20 ---------A   00070  PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    0x6197e8a1e220 ---------A   00080  PRINT:PRINT:PRINT "HERE'S THE FIRST PHRASE:"
    0x6197e8a1c840 ---------A   00090  DIM A$(40)
    0x6197e8a23de0 ---------A   00100  FOR I=1 TO 39 : READ A$(I) : NEXT I
    0x6197e8a243f0 ---------A T 00110  PRINT A$(INT(13*RND(1)+1));" ";
    0x6197e8a24a90 ---------A   00120  PRINT A$(INT(13*RND(1)+14));" ";
    0x6197e8a25110 ---------A   00130  PRINT A$(INT(13*RND(1)+27)) : PRINT
    0x6197e8a25610 ---------A   00150  INPUT Y$ : IF Y$="Y" THEN 110 ELSE GOTO 999
    0x6197e8a25a40 ---------A   00200  DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
    0x6197e8a25e60 ---------A   00210  DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
    0x6197e8a26280 ---------A   00220  DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
    0x6197e8a266a0 ---------A   00230  DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
    0x6197e8a26ac0 ---------A   00240  DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
    0x6197e8a26ee0 ---------A   00250  DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
    0x6197e8a27300 ---------A   00260  DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
    0x6197e8a27720 ---------A   00270  DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
    0x6197e8a27b30 ---------A   00280  DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
    0x6197e8a27e70 ---------A   00290  DATA "STRUCTURE","FACILITY","ENVIRONMENT"
    0x6197e8a28020 ---------A   00999  PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!":END
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
   A) 0x6197e8a1b6d0 (00010)   0x6197e8a1b6d0 (00010)   0x6197e8a28020 (00999)   0x6197e8a28020 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/buzzword.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6197e8a1b6d0 ---------A   00010  PRINT TAB(26);"BUZZWORD GENERATOR"
    0x6197e8a1b670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6197e8a0c2b0 ----------   00030  PRINT
    0x6197e8a1b9e0 ----------        a PRINT
    0x6197e8a1b7f0 ---------A        b PRINT
    0x6197e8a1c040 ---------A   00040  PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    0x6197e8a1be40 ---------A   00050  PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    0x6197e8a1c4c0 ---------A   00060  PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    0x6197e8a1bc20 ---------A   00070  PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    0x6197e8a1bc80 ----------   00080  PRINT
    0x6197e8a1e100 ----------        a PRINT
    0x6197e8a1e220 ---------A        b PRINT "HERE'S THE FIRST PHRASE:"
    0x6197e8a1c840 ---------A   00090  DIM A$(40)
    0x6197e8a23b40 ----------   00100  FOR I=1 TO 39 
    0x6197e8a1dff0 ----------        a READ A$(I) 
    0x6197e8a23de0 ---------A        b NEXT I
    0x6197e8a243f0 ---------A T 00110  PRINT A$(INT(13*RND(1)+1));" ";
    0x6197e8a24a90 ---------A   00120  PRINT A$(INT(13*RND(1)+14));" ";
    0x6197e8a25070 ----------   00130  PRINT A$(INT(13*RND(1)+27)) 
    0x6197e8a25110 ---------A        a PRINT
    0x6197e8a25310 ----------   00150  INPUT Y$ 
    0x6197e8a25610 ---------A        a IF Y$="Y" THEN 110 ELSE GOTO 999
    0x6197e8a25a40 ---------A   00200  DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
    0x6197e8a25e60 ---------A   00210  DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
    0x6197e8a26280 ---------A   00220  DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
    0x6197e8a266a0 ---------A   00230  DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
    0x6197e8a26ac0 ---------A   00240  DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
    0x6197e8a26ee0 ---------A   00250  DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
    0x6197e8a27300 ---------A   00260  DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
    0x6197e8a27720 ---------A   00270  DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
    0x6197e8a27b30 ---------A   00280  DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
    0x6197e8a27e70 ---------A   00290  DATA "STRUCTURE","FACILITY","ENVIRONMENT"
    0x6197e8a27fc0 ----------   00999  PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!"
    0x6197e8a28020 ---------A        a END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/buzzword.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x6197e8a1b6d0 ---------A   01000  PRINT TAB(26);"BUZZWORD GENERATOR"
    0x6197e8a1b670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6197e8a0c2b0 ----------   01020  PRINT
    0x6197e8a1b9e0 ----------   01030  PRINT
    0x6197e8a1b7f0 ---------A   01040  PRINT
    0x6197e8a1c040 ---------A   01050  PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    0x6197e8a1be40 ---------A   01060  PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    0x6197e8a1c4c0 ---------A   01070  PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    0x6197e8a1bc20 ---------A   01080  PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    0x6197e8a1bc80 ----------   01090  PRINT
    0x6197e8a1e100 ----------   01100  PRINT
    0x6197e8a1e220 ---------A   01110  PRINT "HERE'S THE FIRST PHRASE:"
    0x6197e8a1c840 ---------A   01120  DIM A$(40)
    0x6197e8a23b40 ----------   01130  FOR I=1 TO 39 
    0x6197e8a1dff0 ----------   01140  READ A$(I) 
    0x6197e8a23de0 ---------A   01150  NEXT I
    0x6197e8a243f0 ---------A   01160  PRINT A$(INT(13*RND(1)+1));" ";
    0x6197e8a24a90 ---------A   01170  PRINT A$(INT(13*RND(1)+14));" ";
    0x6197e8a25070 ----------   01180  PRINT A$(INT(13*RND(1)+27)) 
    0x6197e8a25110 ---------A   01190  PRINT
    0x6197e8a25310 ----------   01200  INPUT Y$ 
    0x6197e8a25610 ---------A   01210  IF Y$="Y" THEN 1160 ELSE GOTO 999
    0x6197e8a25a40 ---------A   01220  DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
    0x6197e8a25e60 ---------A   01230  DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
    0x6197e8a26280 ---------A   01240  DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
    0x6197e8a266a0 ---------A   01250  DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
    0x6197e8a26ac0 ---------A   01260  DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
    0x6197e8a26ee0 ---------A   01270  DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
    0x6197e8a27300 ---------A   01280  DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
    0x6197e8a27720 ---------A   01290  DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
    0x6197e8a27b30 ---------A   01300  DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
    0x6197e8a27e70 ---------A   01310  DATA "STRUCTURE","FACILITY","ENVIRONMENT"
    0x6197e8a27fc0 ----------   01320  PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!"
    0x6197e8a28020 ---------A   01330  END
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
    0x6197e8a1b6d0 ---------A   01000  PRINT TAB(26);"BUZZWORD GENERATOR"
    0x6197e8a1b670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x6197e8a0c2b0 ---------A   01020  PRINT
    0x6197e8a1b9e0 ---------A   01030  PRINT
    0x6197e8a1b7f0 ---------A   01040  PRINT
    0x6197e8a1c040 ---------A   01050  PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    0x6197e8a1be40 ---------A   01060  PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    0x6197e8a1c4c0 ---------A   01070  PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    0x6197e8a1bc20 ---------A   01080  PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    0x6197e8a1bc80 ---------A   01090  PRINT
    0x6197e8a1e100 ---------A   01100  PRINT
    0x6197e8a1e220 ---------A   01110  PRINT "HERE'S THE FIRST PHRASE:"
    0x6197e8a1c840 ---------A   01120  DIM A$(40)
    0x6197e8a23b40 ---------A   01130  FOR I=1 TO 39 
    0x6197e8a1dff0 ---------A   01140  READ A$(I) 
    0x6197e8a23de0 ---------A   01150  NEXT I
    0x6197e8a243f0 ---------A T 01160  PRINT A$(INT(13*RND(1)+1));" ";
    0x6197e8a24a90 ---------A   01170  PRINT A$(INT(13*RND(1)+14));" ";
    0x6197e8a25070 ---------A   01180  PRINT A$(INT(13*RND(1)+27)) 
    0x6197e8a25110 ---------A   01190  PRINT
    0x6197e8a25310 ---------A   01200  INPUT Y$ 
    0x6197e8a25610 ---------A   01210  IF Y$="Y" THEN 1160 ELSE GOTO 999
    0x6197e8a25a40 ---------A   01220  DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
    0x6197e8a25e60 ---------A   01230  DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
    0x6197e8a26280 ---------A   01240  DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
    0x6197e8a266a0 ---------A   01250  DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
    0x6197e8a26ac0 ---------A   01260  DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
    0x6197e8a26ee0 ---------A   01270  DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
    0x6197e8a27300 ---------A   01280  DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
    0x6197e8a27720 ---------A   01290  DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
    0x6197e8a27b30 ---------A   01300  DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
    0x6197e8a27e70 ---------A   01310  DATA "STRUCTURE","FACILITY","ENVIRONMENT"
    0x6197e8a27fc0 ---------A   01320  PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!"
    0x6197e8a28020 ---------A   01330  END
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
char* data_01220s[]={"ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"};
char* data_01230s[]={"DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"};
char* data_01240s[]={"HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"};
char* data_01250s[]={"INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"};
char* data_01260s[]={"COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"};
char* data_01270s[]={"INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"};
char* data_01280s[]={"MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"};
char* data_01290s[]={"ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"};
char* data_01300s[]={"PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"};
char* data_01310s[]={"STRUCTURE","FACILITY","ENVIRONMENT"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 1220,  4,data_01220s},
    { 1230,  4,data_01230s},
    { 1240,  4,data_01240s},
    { 1250,  4,data_01250s},
    { 1260,  4,data_01260s},
    { 1270,  4,data_01270s},
    { 1280,  4,data_01280s},
    { 1290,  4,data_01290s},
    { 1300,  4,data_01300s},
    { 1310,  3,data_01310s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char*  A_str_arr[40];                             // Basic: A$ 
int    I_int;                                     // Basic: I 
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
    // 01000 PRINT TAB(26);"BUZZWORD GENERATOR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,26);strcat(buf,"BUZZWORD GENERATOR");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT "THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THIS PROGRAM PRINTS HIGHLY ACCEPTABLE PHRASES IN");strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT "'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"'EDUCATOR-SPEAK'THAT YOU CAN WORK INTO REPORTS");strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND SPEECHES.  WHENEVER A QUESTION MARK IS PRINTED,");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"TYPE A 'Y' FOR ANOTHER PHRASE OR 'N' TO QUIT.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "HERE'S THE FIRST PHRASE:"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"HERE'S THE FIRST PHRASE:");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 DIM A$(40)
    // 01130 FOR I=1 TO 39 
    for(I_int=1;I_int<=39;I_int++){
        // 01140 READ A$(I) 
        A_str_arr[I_int] = Get_Data_String();
        // 01150 NEXT I
        int dummy_1150=0; // Ignore this line.
    }; // End-For(I_int)

  Lbl_01160:
    // 01160 PRINT A$(INT(13*RND(1)+1));" ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[INT(13*RND(1)+1)]);strcat(buf," ");fputs(buf,fh); };
    // 01170 PRINT A$(INT(13*RND(1)+14));" ";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[INT(13*RND(1)+14)]);strcat(buf," ");fputs(buf,fh); };
    // 01180 PRINT A$(INT(13*RND(1)+27)) 
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); strcat(buf,A_str_arr[INT(13*RND(1)+27)]);fputs(buf,fh); };
    // 01190 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01200 INPUT Y$ 
    // Start of Basic INPUT statement 01200
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtos(&Y_str,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01200
    // 01210 IF Y$="Y" THEN 1160 ELSE GOTO 999
    if(strcmp(Y_str,"Y")==0)goto Lbl_01160;
    // 01220 DATA "ABILITY","BASAL","BEHAVIORAL","CHILD-CENTERED"
    // 01230 DATA "DIFFERENTIATED","DISCOVERY","FLEXIBLE","HETEROGENEOUS"
    // 01240 DATA "HOMOGENEOUS","MANIPULATIVE","MODULAR","TAVISTOCK"
    // 01250 DATA "INDIVIDUALIZED","LEARNING","EVALUATIVE","OBJECTIVE"
    // 01260 DATA "COGNITIVE","ENRICHMENT","SCHEDULING","HUMANISTIC"
    // 01270 DATA "INTEGRATED","NON-GRADED","TRAINING","VERTICAL AGE"
    // 01280 DATA "MOTIVATIONAL","CREATIVE","GROUPING","MODIFICATION"
    // 01290 DATA "ACCOUNTABILITY","PROCESS","CORE CURRICULUM","ALGORITHM"
    // 01300 DATA "PERFORMANCE","REINFORCEMENT","OPEN CLASSROOM","RESOURCE"
    // 01310 DATA "STRUCTURE","FACILITY","ENVIRONMENT"
    // 01320 PRINT "COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COME BACK WHEN YOU NEED HELP WITH ANOTHER REPORT!");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
