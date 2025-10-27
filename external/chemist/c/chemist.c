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
    0x5b0b96ef4b80 ---------A   00003 PRINT TAB(33);"CHEMIST"
    0x5b0b96ef5f30 ---------A   00006 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b0b96ee42b0 ---------A   00008 PRINT:PRINT:PRINT
    0x5b0b96ef5aa0 ---------A   00010 PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    0x5b0b96ef4090 ---------A   00020 PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    0x5b0b96ef44d0 ---------A   00030 PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    0x5b0b96ef3c30 ---------A   00040 PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    0x5b0b96ef61c0 ---------A   00050 PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    0x5b0b96ef4660 ---------A   00060 PRINT "YOU FACE THE CONSEQUENCES."
    0x5b0b96ef3e40 ---------A T 00100 A=INT(RND(1)*50)
    0x5b0b96efbf90 ---------A   00110 W=7*A/3
    0x5b0b96efc1a0 ---------A   00120 PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    0x5b0b96ef36d0 ---------A   00130 INPUT R
    0x5b0b96efc830 ---------A   00140 D=ABS(W-R)
    0x5b0b96ef3670 ---------A   00150 IF D>W/20 THEN 200
    0x5b0b96efcd00 ---------A   00160 PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    0x5b0b96efcd70 ---------A   00170 PRINT
    0x5b0b96efce10 ---------A   00180 GOTO 100
    0x5b0b96efcf50 ---------A T 00200 PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    0x5b0b96efd080 ---------A   00210 PRINT " OF QUIVERING PROTOPLASM!"
    0x5b0b96efd470 ---------A   00220 T=T+1
    0x5b0b96efd6f0 ---------A   00230 IF T=9 THEN 260
    0x5b0b96efd870 ---------A   00240 PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE."
    0x5b0b96efd910 ---------A   00250 GOTO 100
    0x5b0b96efdab0 ---------A T 00260 PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    0x5b0b96efdc30 ---------A   00270 PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    0x5b0b96efdc80 ---------A   00280 END
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
   A) 0x5b0b96ef4b80 (00003)   0x5b0b96ef4b80 (00003)   0x5b0b96efdc80 (00280)   0x5b0b96efdc80 (00280)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01270 - 10000    8740 

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
    0x5b0b96ef4b80 ---------A   01000 PRINT TAB(10003);"CHEMIST"
    0x5b0b96ef5f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5b0b96ee42b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5b0b96ef5aa0 ---------A   01030 PRINT "THE FICTITIOUS CHECMICAL KRYPTOCYANIC ACID CAN ONLY BE"
    0x5b0b96ef4090 ---------A   01040 PRINT "DILUTED BY THE RATIO OF 7 PARTS WATER TO 3 PARTS ACID."
    0x5b0b96ef44d0 ---------A   01050 PRINT "IF ANY OTHER RATIO IS ATTEMPTED, THE ACID BECOMES UNSTABLE"
    0x5b0b96ef3c30 ---------A   01060 PRINT "AND SOON EXPLODES.  GIVEN THE AMOUNT OF ACID, YOU MUST"
    0x5b0b96ef61c0 ---------A   01070 PRINT "DECIDE WHO MUCH WATER TO ADD FOR DILUTION.  IF YOU MISS"
    0x5b0b96ef4660 ---------A   01080 PRINT "YOU FACE THE CONSEQUENCES."
    0x5b0b96ef3e40 ---------A T 01090 A=INT(RND(1)*50)
    0x5b0b96efbf90 ---------A   01100 W=7*A/3
    0x5b0b96efc1a0 ---------A   01110 PRINT A;"LITERS OF KRYPTOCYANIC ACID.  HOW MUCH WATER";
    0x5b0b96ef36d0 ---------A   01120 INPUT R
    0x5b0b96efc830 ---------A   01130 D=ABS(W-R)
    0x5b0b96ef3670 ---------A   01140 IF D>W/20 THEN 1180
    0x5b0b96efcd00 ---------A   01150 PRINT " GOOD JOB! YOU MAY BREATHE NOW, BUT DON'T INHALE THE FUMES!"
    0x5b0b96efcd70 ---------A   01160 PRINT
    0x5b0b96efce10 ---------A   01170 GOTO 1090
    0x5b0b96efcf50 ---------A T 01180 PRINT " SIZZLE!  YOU HAVE JUST BEEN DESALINATED INTO A BLOB"
    0x5b0b96efd080 ---------A   01190 PRINT " OF QUIVERING PROTOPLASM!"
    0x5b0b96efd470 ---------A   01200 T=T+1
    0x5b0b96efd6f0 ---------A   01210 IF T=9 THEN 1240
    0x5b0b96efd870 ---------A   01220 PRINT " HOWEVER, YOU MAY TRY AGAIN WITH ANOTHER LIFE."
    0x5b0b96efd910 ---------A   01230 GOTO 1090
    0x5b0b96efdab0 ---------A T 01240 PRINT " YOUR 9 LIVES ARE USED, BUT YOU WILL BE LONG REMEMBERED FOR"
    0x5b0b96efdc30 ---------A   01250 PRINT " YOUR CONTRIBUTIONS TO THE FIELD OF COMIC BOOK CHEMISTRY."
    0x5b0b96efdc80 ---------A   01260 END
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
