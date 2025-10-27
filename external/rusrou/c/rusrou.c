/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rusrou.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x651ecbaedb80 ---------A   00001 PRINT TAB(28);"RUSSIAN ROULETTE"
    0x651ecbaeef30 ---------A   00002 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x651ecbaef0b0 ---------A   00003 PRINT:PRINT:PRINT
    0x651ecbaeca20 ---------A   00005 PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    0x651ecbaeeae0 ---------A T 00010 PRINT:PRINT "HERE IS A REVOLVER."
    0x651ecbaece80 ---------A T 00020 PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    0x651ecbaee6a0 ---------A   00022 PRINT "TYPE '2' TO GIVE UP."
    0x651ecbaecc60 ---------A   00023 PRINT "GO";
    0x651ecbaed700 ---------A   00025 N=0
    0x651ecbaec6d0 ---------A T 00030 INPUT I
    0x651ecbaec670 ---------A   00031 IF I<>2 THEN 35
    0x651ecbaed040 ---------A   00032 PRINT "     CHICKEN!!!!!"
    0x651ecbaf4b80 ---------A   00033 GOTO 72
    0x651ecbaf4e40 ---------A T 00035 N=N+1
    0x651ecbaf5110 ---------A   00040 IF RND(1)>.833333 THEN 70
    0x651ecbaf5330 ---------A   00045 IF N>10 THEN 80
    0x651ecbaf5450 ---------A   00050 PRINT "- CLICK -"
    0x651ecbaf5530 ---------A   00060 PRINT: GOTO 30
    0x651ecbaf5670 ---------A T 00070 PRINT "     BANG!!!!!   YOU'RE DEAD!"
    0x651ecbaf57e0 ---------A   00071 PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    0x651ecbaf58d0 ---------A T 00072 PRINT:PRINT:PRINT
    0x651ecbaf5a70 ---------A   00075 PRINT "...NEXT VICTIM...":GOTO 20
    0x651ecbaf5bd0 ---------A T 00080 PRINT "YOU WIN!!!!!"
    0x651ecbaf5d00 ---------A   00085 PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    0x651ecbaf5d70 ---------A   00090 GOTO 10
    0x651ecbaf5db0 ---------A   00099 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00010      00090T
     00020      00075T
     00030      00060T
     00035      00031T
     00070      00040T
     00072      00033T
     00080      00045T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x651ecbaedb80 (00001)   0x651ecbaedb80 (00001)   0x651ecbaf5db0 (00099)   0x651ecbaf5db0 (00099)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01260 - 10000    8750 

 */



/*
 *  Symbol Table Listing for 'basic/rusrou.bas'
 *
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
    N                        Integer     
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
 *  Listing of basic/rusrou.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x651ecbaedb80 ---------A   01000 PRINT TAB(28);"RUSSIAN ROULETTE"
    0x651ecbaeef30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x651ecbaef0b0 ---------A   01020 PRINT:PRINT:PRINT
    0x651ecbaeca20 ---------A   01030 PRINT "THIS IS A GAME OF >>>>>>>>>>RUSSIAN ROULETTE."
    0x651ecbaeeae0 ---------A T 01040 PRINT:PRINT "HERE IS A REVOLVER."
    0x651ecbaece80 ---------A T 01050 PRINT "TYPE '1' TO SPIN CHAMBER AND PULL TRIGGER."
    0x651ecbaee6a0 ---------A   01060 PRINT "TYPE '2' TO GIVE UP."
    0x651ecbaecc60 ---------A   01070 PRINT "GO";
    0x651ecbaed700 ---------A   01080 N=0
    0x651ecbaec6d0 ---------A T 01090 INPUT I
    0x651ecbaec670 ---------A   01100 IF I<>2 THEN 1130
    0x651ecbaed040 ---------A   01110 PRINT "     CHICKEN!!!!!"
    0x651ecbaf4b80 ---------A   01120 GOTO 1200
    0x651ecbaf4e40 ---------A T 01130 N=N+1
    0x651ecbaf5110 ---------A   01140 IF RND(1)>.833333 THEN 1180
    0x651ecbaf5330 ---------A   01150 IF N>10 THEN 1220
    0x651ecbaf5450 ---------A   01160 PRINT "- CLICK -"
    0x651ecbaf5530 ---------A   01170 PRINT: GOTO 1090
    0x651ecbaf5670 ---------A T 01180 PRINT "     BANG!!!!!   YOU'RE DEAD!"
    0x651ecbaf57e0 ---------A   01190 PRINT "CONDOLENCES WILL BE SENT TO YOUR RELATIVES."
    0x651ecbaf58d0 ---------A T 01200 PRINT:PRINT:PRINT
    0x651ecbaf5a70 ---------A   01210 PRINT "...NEXT VICTIM...":GOTO 1050
    0x651ecbaf5bd0 ---------A T 01220 PRINT "YOU WIN!!!!!"
    0x651ecbaf5d00 ---------A   01230 PRINT "LET SOMEONE ELSE BLOW HIS BRAINS OUT."
    0x651ecbaf5d70 ---------A   01240 GOTO 1040
    0x651ecbaf5db0 ---------A   01250 END
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
int    I_int;                                     // Basic: I 
int    N_int;                                     // Basic: N 
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
