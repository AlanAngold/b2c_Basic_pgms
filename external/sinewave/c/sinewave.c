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
    0x60ce5bc636d0 ---------A   00010  PRINT TAB(30);"SINE WAVE"
    0x60ce5bc63670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60ce5bc65b00 ---------A   00030  PRINT: PRINT: PRINT: PRINT: PRINT
    0x60ce5bc64b80 ---------A   00040  REM ARKABLE PROGRAM BY DAVID AHL
    0x60ce5bc65f30 ---------A   00050  B=0
    0x60ce5bc65ff0 ---------A   00100  REM  START LONG LOOP
    0x60ce5bc63ca0 ---------A   00110  FOR T=0 TO 40 STEP .25
    0x60ce5bc660b0 ---------A   00120  A=INT(26+25*SIN(T))
    0x60ce5bc6bc60 ---------A   00130  PRINT TAB(A);
    0x60ce5bc6be80 ---------A   00140  IF B=1 THEN 180
    0x60ce5bc6bfa0 ---------A   00150  PRINT "CREATIVE"
    0x60ce5bc65e70 ---------A   00160  B=1
    0x60ce5bc6c1a0 ---------A   00170  GOTO 200
    0x60ce5bc6c2f0 ---------A T 00180  PRINT "COMPUTING"
    0x60ce5bc6c510 ---------A   00190  B=0
    0x60ce5bc6c640 ---------A T 00200  NEXT T
    0x60ce5bc6c6b0 ---------A   00999  END
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
   A) 0x60ce5bc636d0 (00010)   0x60ce5bc636d0 (00010)   0x60ce5bc6c6b0 (00999)   0x60ce5bc6c6b0 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/sinewave.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60ce5bc636d0 ---------A   00010  PRINT TAB(30);"SINE WAVE"
    0x60ce5bc63670 ---------A   00020  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60ce5bc542b0 ----------   00030  PRINT
    0x60ce5bc639e0 ----------        a PRINT
    0x60ce5bc637f0 ----------        b PRINT
    0x60ce5bc65aa0 ----------        c PRINT
    0x60ce5bc65b00 ---------A        d PRINT
    0x60ce5bc64b80 ---------A   00040  REM ARKABLE PROGRAM BY DAVID AHL
    0x60ce5bc65f30 ---------A   00050  B=0
    0x60ce5bc65ff0 ---------A   00100  REM  START LONG LOOP
    0x60ce5bc63ca0 ---------A   00110  FOR T=0 TO 40 STEP .25
    0x60ce5bc660b0 ---------A   00120  A=INT(26+25*SIN(T))
    0x60ce5bc6bc60 ---------A   00130  PRINT TAB(A);
    0x60ce5bc6be80 ---------A   00140  IF B=1 THEN 180
    0x60ce5bc6bfa0 ---------A   00150  PRINT "CREATIVE"
    0x60ce5bc65e70 ---------A   00160  B=1
    0x60ce5bc6c1a0 ---------A   00170  GOTO 200
    0x60ce5bc6c2f0 ---------A T 00180  PRINT "COMPUTING"
    0x60ce5bc6c510 ---------A   00190  B=0
    0x60ce5bc6c640 ---------A T 00200  NEXT T
    0x60ce5bc6c6b0 ---------A   00999  END
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/sinewave.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x60ce5bc636d0 ---------A   01000  PRINT TAB(30);"SINE WAVE"
    0x60ce5bc63670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60ce5bc542b0 ----------   01020  PRINT
    0x60ce5bc639e0 ----------   01030  PRINT
    0x60ce5bc637f0 ----------   01040  PRINT
    0x60ce5bc65aa0 ----------   01050  PRINT
    0x60ce5bc65b00 ---------A   01060  PRINT
    0x60ce5bc64b80 ---------A   01070  REM ARKABLE PROGRAM BY DAVID AHL
    0x60ce5bc65f30 ---------A   01080  B=0
    0x60ce5bc65ff0 ---------A   01090  REM  START LONG LOOP
    0x60ce5bc63ca0 ---------A   01100  FOR T=0 TO 40 STEP .25
    0x60ce5bc660b0 ---------A   01110  A=INT(26+25*SIN(T))
    0x60ce5bc6bc60 ---------A   01120  PRINT TAB(A);
    0x60ce5bc6be80 ---------A   01130  IF B=1 THEN 1170
    0x60ce5bc6bfa0 ---------A   01140  PRINT "CREATIVE"
    0x60ce5bc65e70 ---------A   01150  B=1
    0x60ce5bc6c1a0 ---------A   01160  GOTO 1190
    0x60ce5bc6c2f0 ---------A   01170  PRINT "COMPUTING"
    0x60ce5bc6c510 ---------A   01180  B=0
    0x60ce5bc6c640 ---------A   01190  NEXT T
    0x60ce5bc6c6b0 ---------A   01200  END
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01210 - 10000    8800 

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
    0x60ce5bc636d0 ---------A   01000  PRINT TAB(30);"SINE WAVE"
    0x60ce5bc63670 ---------A   01010  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x60ce5bc542b0 ---------A   01020  PRINT
    0x60ce5bc639e0 ---------A   01030  PRINT
    0x60ce5bc637f0 ---------A   01040  PRINT
    0x60ce5bc65aa0 ---------A   01050  PRINT
    0x60ce5bc65b00 ---------A   01060  PRINT
    0x60ce5bc64b80 ---------A   01070  REM ARKABLE PROGRAM BY DAVID AHL
    0x60ce5bc65f30 ---------A   01080  B=0
    0x60ce5bc65ff0 ---------A   01090  REM  START LONG LOOP
    0x60ce5bc63ca0 ---------A   01100  FOR T=0 TO 40 STEP .25
    0x60ce5bc660b0 ---------A   01110  A=INT(26+25*SIN(T))
    0x60ce5bc6bc60 ---------A   01120  PRINT TAB(A);
    0x60ce5bc6be80 ---------A   01130  IF B=1 THEN 1170
    0x60ce5bc6bfa0 ---------A   01140  PRINT "CREATIVE"
    0x60ce5bc65e70 ---------A   01150  B=1
    0x60ce5bc6c1a0 ---------A   01160  GOTO 1190
    0x60ce5bc6c2f0 ---------A T 01170  PRINT "COMPUTING"
    0x60ce5bc6c510 ---------A   01180  B=0
    0x60ce5bc6c640 ---------A T 01190  NEXT T
    0x60ce5bc6c6b0 ---------A   01200  END
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
    // 01000 PRINT TAB(30);"SINE WAVE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,30);strcat(buf,"SINE WAVE");strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 REM ARKABLE PROGRAM BY DAVID AHL
    // 01080 B=0
    B_int = 0;
    // 01090 REM  START LONG LOOP
    // 01100 FOR T=0 TO 40 STEP .25
    for(T_int=0;T_int<=40;T_int+=0.25){
        // 01110 A=INT(26+25*SIN(T))
        A_int = INT(26+25*SIN(T_int));
        // 01120 PRINT TAB(A);
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,A_int;fputs(buf,fh); };
        // 01130 IF B=1 THEN 1170
        if(B_int==1)goto Lbl_01170;
        // 01140 PRINT "CREATIVE"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"CREATIVE");strcat(buf,"\n");fputs(buf,fh); };
        // 01150 B=1
        B_int = 1;
        // 01160 GOTO 1190
        goto Lbl_01190;

  Lbl_01170:
        // 01170 PRINT "COMPUTING"
        { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"COMPUTING");strcat(buf,"\n");fputs(buf,fh); };
        // 01180 B=0
        B_int = 0;

  Lbl_01190:
        // 01190 NEXT T
        int dummy_1190=0; // Ignore this line.
    }; // End-For(T_int)
    // 01200 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
