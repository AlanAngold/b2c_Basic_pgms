/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/chemist.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bb7b3d136d0 ---------A   00001  PRINT CHR$(26)
    0x5bb7b3d14fc0 ---------A   00003  PRINT TAB(33);"CHEMST":PRINT
    0x5bb7b3d155e0 ---------A   00006  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bb7b3d15b00 ---------A   00008  PRINT:PRINT:PRINT
    0x5bb7b3d14080 ---------A   00010  PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    0x5bb7b3d144d0 ---------A   00020  PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    0x5bb7b3d13c70 ---------A   00030  PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    0x5bb7b3d14620 ---------A   00040  PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    0x5bb7b3d14790 ---------A   00050  PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    0x5bb7b3d1b8a0 ---------A   00060  PRINT "YOU FACE THE CONSEQUENCES."
    0x5bb7b3d1b960 ---------A   00070  PRINT:PRINT
    0x5bb7b3d15ff0 ---------A T 00100  A=INT(RND(1)*50)
    0x5bb7b3d1c2d0 ---------A   00110  W=7*A/3
    0x5bb7b3d1c4e0 ---------A   00120  PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    0x5bb7b3d1c6e0 ---------A   00130  INPUT R
    0x5bb7b3d1cbe0 ---------A   00140  D=ABS(W-R)
    0x5bb7b3d1cf80 ---------A   00150  IF D>W/20 THEN 200
    0x5bb7b3d1d110 ---------A   00160  PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    0x5bb7b3d1d190 ---------A   00170  PRINT
    0x5bb7b3d1d240 ---------A   00180  GOTO 100
    0x5bb7b3d1d3d0 ---------A T 00200  PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    0x5bb7b3d1d570 ---------A   00210  PRINT " OF QUIVERING PROTOPLASM!":PRINT
    0x5bb7b3d1d970 ---------A   00220  T=T+1
    0x5bb7b3d1dbf0 ---------A   00230  IF T=9 THEN 260
    0x5bb7b3d1ddd0 ---------A   00240  PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE.":PRINT
    0x5bb7b3d1de80 ---------A   00250  GOTO 100
    0x5bb7b3d1e030 ---------A T 00260  PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    0x5bb7b3d1e1c0 ---------A   00270  PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    0x5bb7b3d1e300 ---------A   00275  PRINT:PRINT:PRINT
    0x5bb7b3d1e380 ---------A   00280  RUN "MENU"
    0x5bb7b3d1e590 ---------A   00999  INPUT L9
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00100      00180T, 00250T
     00200      00150T
     00260      00230T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5bb7b3d136d0 (00001)   0x5bb7b3d136d0 (00001)   0x5bb7b3d1e590 (00999)   0x5bb7b3d1e590 (00999)   


 */

/*
 * Title: The unrolled BASIC Listing
 *
 *  Listing of basic/chemist.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bb7b3d136d0 ---------A   00001  PRINT CHR$(26)
    0x5bb7b3d13670 ----------   00003  PRINT TAB(33);"CHEMST"
    0x5bb7b3d14fc0 ---------A        a PRINT
    0x5bb7b3d155e0 ---------A   00006  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bb7b3d139e0 ----------   00008  PRINT
    0x5bb7b3d15aa0 ----------        a PRINT
    0x5bb7b3d15b00 ---------A        b PRINT
    0x5bb7b3d14080 ---------A   00010  PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    0x5bb7b3d144d0 ---------A   00020  PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    0x5bb7b3d13c70 ---------A   00030  PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    0x5bb7b3d14620 ---------A   00040  PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    0x5bb7b3d14790 ---------A   00050  PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    0x5bb7b3d1b8a0 ---------A   00060  PRINT "YOU FACE THE CONSEQUENCES."
    0x5bb7b3d1b900 ----------   00070  PRINT
    0x5bb7b3d1b960 ---------A        a PRINT
    0x5bb7b3d15ff0 ---------A T 00100  A=INT(RND(1)*50)
    0x5bb7b3d1c2d0 ---------A   00110  W=7*A/3
    0x5bb7b3d1c4e0 ---------A   00120  PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    0x5bb7b3d1c6e0 ---------A   00130  INPUT R
    0x5bb7b3d1cbe0 ---------A   00140  D=ABS(W-R)
    0x5bb7b3d1cf80 ---------A   00150  IF D>W/20 THEN 200
    0x5bb7b3d1d110 ---------A   00160  PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    0x5bb7b3d1d190 ---------A   00170  PRINT
    0x5bb7b3d1d240 ---------A   00180  GOTO 100
    0x5bb7b3d1d3d0 ---------A T 00200  PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    0x5bb7b3d1d4f0 ----------   00210  PRINT " OF QUIVERING PROTOPLASM!"
    0x5bb7b3d1d570 ---------A        a PRINT
    0x5bb7b3d1d970 ---------A   00220  T=T+1
    0x5bb7b3d1dbf0 ---------A   00230  IF T=9 THEN 260
    0x5bb7b3d1dd50 ----------   00240  PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE."
    0x5bb7b3d1ddd0 ---------A        a PRINT
    0x5bb7b3d1de80 ---------A   00250  GOTO 100
    0x5bb7b3d1e030 ---------A T 00260  PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    0x5bb7b3d1e1c0 ---------A   00270  PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    0x5bb7b3d1e220 ----------   00275  PRINT
    0x5bb7b3d1e280 ----------        a PRINT
    0x5bb7b3d1e300 ---------A        b PRINT
    0x5bb7b3d1e380 ---------A   00280  RUN "MENU"
    0x5bb7b3d1e590 ---------A   00999  INPUT L9
 */

/*
 * Title: The unrolled BASIC Listing,after renumbering
 *
 *  Listing of basic/chemist.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bb7b3d136d0 ---------A   01000  PRINT CHR$(26)
    0x5bb7b3d13670 ----------   01010  PRINT TAB(10103);"CHEMST"
    0x5bb7b3d14fc0 ---------A   01020  PRINT
    0x5bb7b3d155e0 ---------A   01030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bb7b3d139e0 ----------   01040  PRINT
    0x5bb7b3d15aa0 ----------   01050  PRINT
    0x5bb7b3d15b00 ---------A   01060  PRINT
    0x5bb7b3d14080 ---------A   01070  PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    0x5bb7b3d144d0 ---------A   01080  PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    0x5bb7b3d13c70 ---------A   01090  PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    0x5bb7b3d14620 ---------A   01100  PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    0x5bb7b3d14790 ---------A   01110  PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    0x5bb7b3d1b8a0 ---------A   01120  PRINT "YOU FACE THE CONSEQUENCES."
    0x5bb7b3d1b900 ----------   01130  PRINT
    0x5bb7b3d1b960 ---------A   01140  PRINT
    0x5bb7b3d15ff0 ---------A   01150  A=INT(RND(1)*50)
    0x5bb7b3d1c2d0 ---------A   01160  W=7*A/3
    0x5bb7b3d1c4e0 ---------A   01170  PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    0x5bb7b3d1c6e0 ---------A   01180  INPUT R
    0x5bb7b3d1cbe0 ---------A   01190  D=ABS(W-R)
    0x5bb7b3d1cf80 ---------A   01200  IF D>W/20 THEN 1240
    0x5bb7b3d1d110 ---------A   01210  PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    0x5bb7b3d1d190 ---------A   01220  PRINT
    0x5bb7b3d1d240 ---------A   01230  GOTO 1150
    0x5bb7b3d1d3d0 ---------A   01240  PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    0x5bb7b3d1d4f0 ----------   01250  PRINT " OF QUIVERING PROTOPLASM!"
    0x5bb7b3d1d570 ---------A   01260  PRINT
    0x5bb7b3d1d970 ---------A   01270  T=T+1
    0x5bb7b3d1dbf0 ---------A   01280  IF T=9 THEN 1320
    0x5bb7b3d1dd50 ----------   01290  PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE."
    0x5bb7b3d1ddd0 ---------A   01300  PRINT
    0x5bb7b3d1de80 ---------A   01310  GOTO 1150
    0x5bb7b3d1e030 ---------A   01320  PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    0x5bb7b3d1e1c0 ---------A   01330  PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    0x5bb7b3d1e220 ----------   01340  PRINT
    0x5bb7b3d1e280 ----------   01350  PRINT
    0x5bb7b3d1e300 ---------A   01360  PRINT
    0x5bb7b3d1e380 ---------A   01370  RUN "MENU"
    0x5bb7b3d1e590 ---------A   01380  INPUT L9
 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01390 - 10000    8620 

 */



/*
 *  Symbol Table Listing for 'basic/chemist.bas'
 *
    A                        Integer     
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
    D                        Integer     
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
    L9                       Integer     
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
    T                        Integer     
    TAB             Function Unknown (0)    args=1, int    
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/chemist.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5bb7b3d136d0 ---------A   01000  PRINT CHR$(26)
    0x5bb7b3d13670 ---------A   01010  PRINT TAB(10103);"CHEMST"
    0x5bb7b3d14fc0 ---------A   01020  PRINT
    0x5bb7b3d155e0 ---------A   01030  PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5bb7b3d139e0 ---------A   01040  PRINT
    0x5bb7b3d15aa0 ---------A   01050  PRINT
    0x5bb7b3d15b00 ---------A   01060  PRINT
    0x5bb7b3d14080 ---------A   01070  PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    0x5bb7b3d144d0 ---------A   01080  PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    0x5bb7b3d13c70 ---------A   01090  PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    0x5bb7b3d14620 ---------A   01100  PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    0x5bb7b3d14790 ---------A   01110  PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    0x5bb7b3d1b8a0 ---------A   01120  PRINT "YOU FACE THE CONSEQUENCES."
    0x5bb7b3d1b900 ---------A   01130  PRINT
    0x5bb7b3d1b960 ---------A   01140  PRINT
    0x5bb7b3d15ff0 ---------A T 01150  A=INT(RND(1)*50)
    0x5bb7b3d1c2d0 ---------A   01160  W=7*A/3
    0x5bb7b3d1c4e0 ---------A   01170  PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    0x5bb7b3d1c6e0 ---------A   01180  INPUT R
    0x5bb7b3d1cbe0 ---------A   01190  D=ABS(W-R)
    0x5bb7b3d1cf80 ---------A   01200  IF D>W/20 THEN 1240
    0x5bb7b3d1d110 ---------A   01210  PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    0x5bb7b3d1d190 ---------A   01220  PRINT
    0x5bb7b3d1d240 ---------A   01230  GOTO 1150
    0x5bb7b3d1d3d0 ---------A T 01240  PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    0x5bb7b3d1d4f0 ---------A   01250  PRINT " OF QUIVERING PROTOPLASM!"
    0x5bb7b3d1d570 ---------A   01260  PRINT
    0x5bb7b3d1d970 ---------A   01270  T=T+1
    0x5bb7b3d1dbf0 ---------A   01280  IF T=9 THEN 1320
    0x5bb7b3d1dd50 ---------A   01290  PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE."
    0x5bb7b3d1ddd0 ---------A   01300  PRINT
    0x5bb7b3d1de80 ---------A   01310  GOTO 1150
    0x5bb7b3d1e030 ---------A T 01320  PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    0x5bb7b3d1e1c0 ---------A   01330  PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    0x5bb7b3d1e220 ---------A   01340  PRINT
    0x5bb7b3d1e280 ---------A   01350  PRINT
    0x5bb7b3d1e300 ---------A   01360  PRINT
    0x5bb7b3d1e380 ---------A   01370  RUN "MENU"
    0x5bb7b3d1e590 ---------A   01380  INPUT L9
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
int    D_int;                                     // Basic: D 
int    L9_int;                                    // Basic: L9 
int    R_int;                                     // Basic: R 
int    T_int;                                     // Basic: T 
int    W_int;                                     // Basic: W 
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
    // 01000 PRINT CHR$(26)
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcpy(buf,CHR$(26));strcat(buf,"\n");fputs(buf,fh); };
    // 01010 PRINT TAB(10103);"CHEMST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,33);strcat(buf,"CHEMST");strcat(buf,"\n");fputs(buf,fh); };
    // 01020 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01030 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);b2c_TAB(buf,15);strcat(buf,"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY");strcat(buf,"\n");fputs(buf,fh); };
    // 01040 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01050 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01060 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01070 PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE");strcat(buf,"\n");fputs(buf,fh); };
    // 01080 PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID.");strcat(buf,"\n");fputs(buf,fh); };
    // 01090 PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE");strcat(buf,"\n");fputs(buf,fh); };
    // 01100 PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST");strcat(buf,"\n");fputs(buf,fh); };
    // 01110 PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS");strcat(buf,"\n");fputs(buf,fh); };
    // 01120 PRINT "YOU FACE THE CONSEQUENCES."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"YOU FACE THE CONSEQUENCES.");strcat(buf,"\n");fputs(buf,fh); };
    // 01130 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01140 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };

  Lbl_01150:
    // 01150 A=INT(RND(1)*50)
    A_int = INT(RND(1)*50);
    // 01160 W=7*A/3
    W_int = 7*A_int/3;
    // 01170 PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256); b2c_INT(buf,A_int);strcat(buf,"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER");fputs(buf,fh); };
    // 01180 INPUT R
    // Start of Basic INPUT statement 01180
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&R_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01180
    // 01190 D=ABS(W-R)
    D_int = ABS(W_int-R_int);
    // 01200 IF D>W/20 THEN 1240
    if(D_int>W_int/20)goto Lbl_01240;
    // 01210 PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!");strcat(buf,"\n");fputs(buf,fh); };
    // 01220 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01230 GOTO 1150
    goto Lbl_01150;

  Lbl_01240:
    // 01240 PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB");strcat(buf,"\n");fputs(buf,fh); };
    // 01250 PRINT " OF QUIVERING PROTOPLASM!"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," OF QUIVERING PROTOPLASM!");strcat(buf,"\n");fputs(buf,fh); };
    // 01260 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01270 T=T+1
    T_int = T_int+1;
    // 01280 IF T=9 THEN 1320
    if(T_int==9)goto Lbl_01320;
    // 01290 PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE.");strcat(buf,"\n");fputs(buf,fh); };
    // 01300 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01310 GOTO 1150
    goto Lbl_01150;

  Lbl_01320:
    // 01320 PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR");strcat(buf,"\n");fputs(buf,fh); };
    // 01330 PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf," YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY.");strcat(buf,"\n");fputs(buf,fh); };
    // 01340 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01350 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01360 PRINT
    { FILE*fh=stdout;char buf[256]; memset(buf,0,256);strcat(buf,"\n");fputs(buf,fh); };
    // 01370 RUN "MENU"
    system("MENU");
    // 01380 INPUT L9
    // Start of Basic INPUT statement 01380
    {
        int numargs=1;
        char *args[numargs+1];
        bool echoeol=true;
        while(true){
            fprintf(stdout," ? ");
            int err=input(args,numargs,echoeol);
            if(err==0x03) break;
            if(err || 
                (err += b2c_strtoi(&L9_int,args,0)) ){
                 printf("?Redo from start\n");
            }else{
                break;
            };
        };
    }; // End of Basic INPUT statement 01380
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
