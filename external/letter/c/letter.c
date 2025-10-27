/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/letter.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c9c3acf3b80 ---------A   00010 PRINT TAB(33);"LETTER"
    0x5c9c3acf4f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c9c3acf50b0 ---------A   00030 PRINT:PRINT:PRINT
    0x5c9c3acf27f0 ---------A   00100 PRINT "LETTER GUESSING GAME": PRINT
    0x5c9c3acf4af0 ---------A   00210 PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    0x5c9c3acf3480 ---------A   00220 PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    0x5c9c3acf3510 ---------A   00230 PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    0x5c9c3acfa960 ---------A T 00310 L=65+INT(RND(1)*26)
    0x5c9c3acfac20 ---------A   00320 G=0
    0x5c9c3acfad70 ---------A   00340 PRINT: PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    0x5c9c3acfaed0 ---------A T 00410 PRINT: PRINT "WHAT IS YOUR GUESS";
    0x5c9c3acfb1a0 ---------A   00420 G=G+1
    0x5c9c3acfb700 ---------A   00430 INPUT A$: A=ASC(A$): PRINT
    0x5c9c3acf2670 ---------A   00440 IF A=L THEN 500
    0x5c9c3acfbbb0 ---------A   00450 IF A>L THEN 480
    0x5c9c3acfbd60 ---------A   00460 PRINT "TOO LOW.  TRY A HIGHER LETTER.": GOTO 410
    0x5c9c3acfbef0 ---------A T 00480 PRINT "TOO HIGH.  TRY A LOWER LETTER.": GOTO 410
    0x5c9c3acfc280 ---------A T 00500 PRINT: PRINT "YOU GOT IT IN";G;"GUESSES!!"
    0x5c9c3acfc500 ---------A   00504 IF G<=5 THEN 508
    0x5c9c3acfc6b0 ---------A   00506 PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!": GOTO 515
    0x5c9c3acfc810 ---------A T 00508 PRINT "GOOD JOB !!!!!"
    0x5c9c3acfced0 ---------A   00510 FOR N=1 TO 15: PRINT CHR$(7);: NEXT N
    0x5c9c3acfcf30 ---------A T 00515 PRINT
    0x5c9c3acfd080 ---------A   00520 PRINT "LET'S PLAN AGAIN....."
    0x5c9c3acfd0f0 ---------A   00530 GOTO 310
    0x5c9c3acfd130 ---------A   00999 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00310      00530T
     00410      00460T, 00480T
     00480      00450T
     00500      00440T
     00508      00504T
     00515      00506T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x5c9c3acf3b80 (00010)   0x5c9c3acf3b80 (00010)   0x5c9c3acfd130 (00999)   0x5c9c3acfd130 (00999)   


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
 *  Symbol Table Listing for 'basic/letter.bas'
 *
    A                        Integer     
    A$                       String      
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
    G                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
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
 *  Listing of basic/letter.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x5c9c3acf3b80 ---------A   01000 PRINT TAB(33);"LETTER"
    0x5c9c3acf4f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x5c9c3acf50b0 ---------A   01020 PRINT:PRINT:PRINT
    0x5c9c3acf27f0 ---------A   01030 PRINT "LETTER GUESSING GAME": PRINT
    0x5c9c3acf4af0 ---------A   01040 PRINT "I'LL THINK OF A LETTER OF THE ALPHABET, A TO Z."
    0x5c9c3acf3480 ---------A   01050 PRINT "TRY TO GUESS MY LETTER AND I'LL GIVE YOU CLUES"
    0x5c9c3acf3510 ---------A   01060 PRINT "AS TO HOW CLOSE YOU'RE GETTING TO MY LETTER."
    0x5c9c3acfa960 ---------A T 01070 L=65+INT(RND(1)*26)
    0x5c9c3acfac20 ---------A   01080 G=0
    0x5c9c3acfad70 ---------A   01090 PRINT: PRINT "O.K., I HAVE A LETTER.  START GUESSING."
    0x5c9c3acfaed0 ---------A T 01100 PRINT: PRINT "WHAT IS YOUR GUESS";
    0x5c9c3acfb1a0 ---------A   01110 G=G+1
    0x5c9c3acfb700 ---------A   01120 INPUT A$: A=ASC(A$): PRINT
    0x5c9c3acf2670 ---------A   01130 IF A=L THEN 1170
    0x5c9c3acfbbb0 ---------A   01140 IF A>L THEN 1160
    0x5c9c3acfbd60 ---------A   01150 PRINT "TOO LOW.  TRY A HIGHER LETTER.": GOTO 1100
    0x5c9c3acfbef0 ---------A T 01160 PRINT "TOO HIGH.  TRY A LOWER LETTER.": GOTO 1100
    0x5c9c3acfc280 ---------A T 01170 PRINT: PRINT "YOU GOT IT IN";G;"GUESSES!!"
    0x5c9c3acfc500 ---------A   01180 IF G<=5 THEN 1200
    0x5c9c3acfc6b0 ---------A   01190 PRINT "BUT IT SHOULDN'T TAKE MORE THAN 5 GUESSES!": GOTO 1220
    0x5c9c3acfc810 ---------A T 01200 PRINT "GOOD JOB !!!!!"
    0x5c9c3acfced0 ---------A   01210 FOR N=1 TO 15: PRINT CHR$(7);: NEXT N
    0x5c9c3acfcf30 ---------A T 01220 PRINT
    0x5c9c3acfd080 ---------A   01230 PRINT "LET'S PLAN AGAIN....."
    0x5c9c3acfd0f0 ---------A   01240 GOTO 1070
    0x5c9c3acfd130 ---------A   01250 END
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
int    G_int;                                     // Basic: G 
int    L_int;                                     // Basic: L 
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
