/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of basic/bullseye.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x599a0061aac0 ---------A   00005 PRINT TAB(32);"BULLSEYE"
    0x599a0061be70 ---------A   00010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x599a0060a2b0 ---------A   00020 PRINT:PRINT:PRINT
    0x599a0061b9e0 ---------A   00030 PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    0x599a00619f80 ---------A   00040 PRINT "WITH 10, 20, 30, AND 40 POINT ZONES.  THE OBJECTIVE IS"
    0x599a0061a3c0 ---------A   00050 PRINT "TO GET 200 POINTS.": PRINT
    0x599a0061a6f0 ---------A   00060 PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    0x599a00621bb0 ---------A   00070 PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    0x599a00622150 ---------A   00080 PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    0x599a00622750 ---------A   00090 PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING":PRINT
    0x599a00623b30 ---------A   00100 DIM A$(20),S(20),W(10): M=0: R=0: FOR I=1 TO 20: S(I)=0: NEXT I
    0x599a00623d50 ---------A   00110 INPUT "HOW MANY PLAYERS";N: PRINT
    0x599a00624060 ---------A   00120 FOR I=1 TO N
    0x599a006244f0 ---------A   00130 PRINT "NAME OF PLAYER #";I;:INPUT A$(I)
    0x599a00624630 ---------A   00140 NEXT I
    0x599a00624d40 ---------A T 00150 R=R+1: PRINT: PRINT "ROUND";R:PRINT "---------"
    0x599a00625050 ---------A   00160 FOR I=1 TO N
    0x599a00625620 ---------A T 00170 PRINT: PRINT A$(I)"'S THROW";: INPUT T
    0x599a00625c10 ---------A   00180 IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!": GOTO 170
    0x599a00625fb0 ----------   00190 ON T GOTO 200, 210, 200
    0x599a00626b00 ---------- T 00200 P1=.65: P2=.55: P3=.5: P4=.5: GOTO 230
    0x599a00627300 ---------- T 00210 P1=.99: P2=.77: P3=.43: P4=.01: GOTO 230
    0x599a00627ad0 ----------   00220 P1=.95: P2=.75: P3=.45: P4=.05
    0x599a00627eb0 ---------- T 00230 U=RND(1)
    0x599a00628560 ----------   00240 IF U>=P1 THEN PRINT "BULLSEYE!!  40 POINTS!":B=40: GOTO 290
    0x599a00628b60 ----------   00250 IF U>=P2 THEN PRINT "30-POINT ZONE!":B=30: GOTO 290
    0x599a00629170 ----------   00260 IF U>=P3 THEN PRINT "20-POINT ZONE":B=20: GOTO 290
    0x599a00629770 ----------   00270 IF U>=P4 THEN PRINT "WHEW!  10 POINTS.":B=10: GOTO 290
    0x599a00629aa0 ----------   00280 PRINT "MISSED THE TARGET!  TOO BAD.": B=0
    0x599a0062a3d0 ---------- T 00290 S(I)=S(I)+B: PRINT "TOTAL SCORE =";S(I): NEXT I
    0x599a0062a6b0 ----------   00300 FOR I=1 TO N
    0x599a0062b000 ----------   00310 IF S(I)>=200 THEN M=M+1: W(M)=I
    0x599a0062b130 ----------   00320 NEXT I
    0x599a0062b5c0 ----------   00330 IF M=0 THEN 150
    0x599a0062b7f0 ----------   00340 PRINT: PRINT "WE HAVE A WINNER!!": PRINT
    0x599a0062c3b0 ----------   00350 FOR I=1 TO M: PRINT A$(W(I));" SCORED";S(W(I));"POINTS.": NEXT I
    0x599a0062c5b0 ---------A   00360 PRINT: PRINT "THANKS FOR THE GAME.": END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     00150      00330T
     00170      00180T
     00200      00190T, 00190T
     00210      00190T
     00230      00200T, 00210T
     00290      00240T, 00250T, 00260T, 00270T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start     LineNum       Target     LineNum        Return    LineNum        End       LineNum  
  --- --------------  -----    --------------  -----    --------------  -----    --------------  -----   
   A) 0x599a0061aac0 (00005)   0x000000000000 (00000)   0x599a0062c5b0 (00360)   0x599a0062c5b0 (00360)   


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     01200 - 10000    8810 

 */



/*
 *  Symbol Table Listing for 'basic/bullseye.bas'
 *
    A$              Array    String          {0,19} 
    ABS             Function Integer         args=1, int    
    ASC             Function Integer         args=1, char*  
    ATN             Function Float           args=1, float  
    B                        Float       
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
    M                        Float       
    MAX             Function Integer         args=1, int    
    MID$            Function String          args=2, char*  int    
    MIN             Function Integer         args=1, int    
    MKD$            Function String          args=1, int    
    MKI$            Function String          args=1, float  
    MKS$            Function String          args=1, float  
    N                        Float       
    OCT$            Function String          args=1, float  
    P1                       Float       
    P2                       Float       
    P3                       Float       
    P4                       Float       
    PEEK            Function Integer         args=1, int    
    PEN             Function Integer         args=1, char*  
    PLAY            Function Integer         args=1, Any    
    PMAP            Function Integer         args=2, int    int    
    POINT           Function Integer         args=2, int    int    
    POS             Function Integer         args=1, Any    
    R                        Float       
    RIGHT$          Function String          args=2, char*  int    
    RND             Function Float           args=1, int    
    S               Array    Float           {0,19} 
    SGN             Function Integer         args=1, int    
    SIN             Function Float           args=1, float  
    SPACE$          Function String          args=1, int    
    SPC             Function Integer         args=1, int    
    SQR             Function Float           args=1, float  
    STICK           Function Integer         args=1, int    
    STR$            Function String          args=1, float  
    STRING$         Function String          args=2, int    int    
    T                        Float       
    TAB$            Function String          args=1, int    
    TAN             Function Float           args=1, int    
    TIMER           Function Float           args=0, 
    U                        Float       
    VAL             Function Integer         args=1, char*  
    VARPTR          Function Integer         args=1, Any    
    VARPTR$         Function String          args=1, Any    
    W               Array    Float           {0,9} 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of basic/bullseye.bas: 
 *
                   +--------+---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   |        | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    |        | |
        Address    v        v v Original BASIC statement
    -------------- ---------- - ------------------------------------------------------------------------------
    0x599a0061aac0 ---------A   01000 PRINT TAB(32);"BULLSEYE"
    0x599a0061be70 ---------A   01010 PRINT TAB(15);"CREATIVE COMPUTING  MORRISTOWN, NEW JERSEY"
    0x599a0060a2b0 ---------A   01020 PRINT:PRINT:PRINT
    0x599a0061b9e0 ---------A   01030 PRINT "IN THIS GAME, UP TO 20 PLAYERS THROW DARTS AT A TARGET"
    0x599a00619f80 ---------A   01040 PRINT "WITH 10, 20, 30, AND 1040 POINT ZONES.  THE OBJECTIVE IS"
    0x599a0061a3c0 ---------A   01050 PRINT "TO GET 200 POINTS.": PRINT
    0x599a0061a6f0 ---------A   01060 PRINT "THROW",TAB(20);"DESCRIPTION";TAB(45);"PROBABLE SCORE"
    0x599a00621bb0 ---------A   01070 PRINT" 1";TAB(20);"FAST OVERARM";TAB(45);"BULLSEYE OR COMPLETE MISS"
    0x599a00622150 ---------A   01080 PRINT" 2";TAB(20);"CONTROLLED OVERARM";TAB(45);"10, 20 OR 30 POINTS"
    0x599a00622750 ---------A   01090 PRINT" 3";TAB(20);"UNDERARM";TAB(45);"ANYTHING":PRINT
    0x599a00623b30 ---------A   01100 DIM A$(20),S(20),W(10): M=0: R=0: FOR I=1 TO 20: S(I)=0: NEXT I
    0x599a00623d50 ---------A   01110 INPUT "HOW MANY PLAYERS";N: PRINT
    0x599a00624060 ---------A   01120 FOR I=1 TO N
    0x599a006244f0 ---------A   01130 PRINT "NAME OF PLAYER #";I;:INPUT A$(I)
    0x599a00624630 ---------A   01140 NEXT I
    0x599a00624d40 ---------A   01150 R=R+1: PRINT: PRINT "ROUND";R:PRINT "---------"
    0x599a00625050 ---------A   01160 FOR I=1 TO N
    0x599a00625620 ---------A T 01170 PRINT: PRINT A$(I)"'S THROW";: INPUT T
    0x599a00625c10 ---------A   01180 IF T<0 OR T>3 THEN PRINT "INPUT 1, 2, OR 3!": GOTO 1170
    0x599a0062c5b0 ---------A   01190 PRINT: PRINT "THANKS FOR THE GAME.": END
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
char*  A_str_arr[20];                             // Basic: A$ 
float  B_flt;                                     // Basic: B 
float  I_flt;                                     // Basic: I 
float  M_flt;                                     // Basic: M 
float  N_flt;                                     // Basic: N 
float  P1_flt;                                    // Basic: P1 
float  P2_flt;                                    // Basic: P2 
float  P3_flt;                                    // Basic: P3 
float  P4_flt;                                    // Basic: P4 
float  R_flt;                                     // Basic: R 
float  S_flt_arr[20];                             // Basic: S 
float  T_flt;                                     // Basic: T 
float  U_flt;                                     // Basic: U 
float  W_flt_arr[10];                             // Basic: W 
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
