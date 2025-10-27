/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/rocksp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55958ed82b80 ---------A   00010 PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    0x55958ed83f30 ---------A   00020 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x55958ed840b0 ---------A   00025 PRINT:PRINT:PRINT
    0x55958ed816d0 ---------A T 00030 INPUT "HOW MANY GAMES";Q
    0x55958ed81670 ---------A   00040 IF Q<11 THEN 60
    0x55958ed824f0 ---------A   00050 PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY.": GOTO 30
    0x55958ed84220 ---------A T 00060 FOR G=1 TO Q
    0x55958ed82870 ---------A   00070 PRINT: PRINT "GAME NUMBER";G
    0x55958ed89e80 ---------A   00080 X=INT(RND(1)*3+1)
    0x55958ed82040 ---------A T 00090 PRINT "3=ROCK...2=SCISSORS...1=PAPER"
    0x55958ed8a180 ---------A   00100 INPUT "1...2...3...WHAT'S YOUR CHOICE";K
    0x55958ed8aad0 ---------A   00110 IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID.": GOTO 90
    0x55958ed8abd0 ----------   00120 PRINT "THIS IS MY CHOICE..."
    0x55958ed8af70 ----------   00130 ON X GOTO 140,150,160
    0x55958ed8b120 ---------- T 00140 PRINT "...PAPER": GOTO 170
    0x55958ed8b2b0 ---------- T 00150 PRINT "...SCISSORS": GOTO 170
    0x55958ed8b3f0 ---------- T 00160 PRINT "...ROCK"
    0x55958ed8b660 ---------- T 00170 IF X=K THEN 250
    0x55958ed8b8e0 ----------   00180 IF X>K THEN 230
    0x55958ed8bb50 ----------   00190 IF X=1 THEN 210
    0x55958ed8c0d0 ---------- T 00200 PRINT "YOU WIN!!!":H=H+1: GOTO 260
    0x55958ed8c330 ---------- T 00210 IF K<>3 THEN 200
    0x55958ed8c8c0 ---------- T 00220 PRINT "WOW!  I WIN!!!":C=C+1:GOTO 260
    0x55958ed8cd20 ---------- T 00230 IF K<>1 OR X<>3 THEN 220
    0x55958ed8cdb0 ----------   00240 GOTO 200
    0x55958ed8cef0 ---------- T 00250 PRINT "TIE GAME.  NO WINNER."
    0x55958ed8d020 ---------- T 00260 NEXT G
    0x55958ed8d210 ----------   00270 PRINT: PRINT "HERE IS THE FINAL GAME SCORE:"
    0x55958ed8d570 ----------   00280 PRINT "I HAVE WON";C;"GAME(S)."
    0x55958ed8d8e0 ----------   00290 PRINT "YOU HAVE WON";H;"GAME(S)."
    0x55958ed8ded0 ----------   00300 PRINT "AND";Q-(C+H);"GAME(S) ENDED IN A TIE."
    0x55958ed8e070 ----------   00310 PRINT: PRINT "THANKS FOR PLAYING!!"
    0x55958ed8e0c0 ---------A   00320 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00030      00050T
     00060      00040T
     00090      00110T
     00140      00130T
     00150      00130T
     00160      00130T
     00170      00140T, 00150T
     00200      00210T, 00240T
     00210      00190T
     00220      00230T
     00230      00180T
     00250      00170T
     00260      00200T, 00220T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x55958ed82b80 (00010)   0x55958ed82b80 (00010)   0x55958ed8e0c0 (00320)   0x55958ed8e0c0 (00320)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01130 - 10000    8880 

 */



/*
 *  Symbol Table Listing for 'basic/rocksp.bas'
 *
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
    ENVIRON$        Function String          args=1, int    
    EOF             Function Integer         args=1, int    
    EXP             Function Float           args=1, int    
    EXTERR          Function Integer         args=1, int    
    FIX             Function Integer         args=1, float  
    FRE             Function Integer         args=1, char*  
    G                        Integer     
    H                        Integer     
    HEX$            Function String          args=1, int    
    INP             Function Integer         args=1, int    
    INPUT$          Function String          args=2, int    int    
    INSTR           Function Integer         args=3, int    char*  char*  
    INT             Function Integer         args=1, float  
    IOCTL$          Function String          args=1, int    
    K                        Integer     
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
    Q                        Integer     
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
    X                        Integer     

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/rocksp.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x55958ed82b80 ---------A   01000 PRINT TAB(21);"GAME OF ROCK, SCISSORS, PAPER"
    0x55958ed83f30 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x55958ed840b0 ---------A   01020 PRINT:PRINT:PRINT
    0x55958ed816d0 ---------A T 01030 INPUT "HOW MANY GAMES";Q
    0x55958ed81670 ---------A   01040 IF Q<11 THEN 1060
    0x55958ed824f0 ---------A   01050 PRINT "SORRY, BUT WE AREN'T ALLOWED TO PLAY THAT MANY.": GOTO 1030
    0x55958ed84220 ---------A T 01060 FOR G=1 TO Q
    0x55958ed82870 ---------A   01070 PRINT: PRINT "GAME NUMBER";G
    0x55958ed89e80 ---------A   01080 X=INT(RND(1)*3+1)
    0x55958ed82040 ---------A T 01090 PRINT "3=ROCK...2=SCISSORS...1=PAPER"
    0x55958ed8a180 ---------A   01100 INPUT "1...2...3...WHAT'S YOUR CHOICE";K
    0x55958ed8aad0 ---------A   01110 IF (K-1)*(K-2)*(K-3)<>0 THEN PRINT "INVALID.": GOTO 1090
    0x55958ed8e0c0 ---------A   01120 END
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
int    C_int;                                     // Basic: C 
int    G_int;                                     // Basic: G 
int    H_int;                                     // Basic: H 
int    K_int;                                     // Basic: K 
int    Q_int;                                     // Basic: Q 
int    X_int;                                     // Basic: X 
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
